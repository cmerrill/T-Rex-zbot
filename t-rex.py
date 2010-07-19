import zephyr
import time
import random
import zbot_config as config

# Generate a random number centered around center and with the given variance
def random_with_variance(center,variance):
    return center + ((2*variance)*random.random() - variance)

# Send a zephyr as t-rex, on the given instance
def send_trex_zephyr(message, inst=config.zinstance):
    if not config.debug: zephyr.ZNotice(cls=config.zclass, instance=inst, sender=config.zsender, fields=[config.zsig,message]).send()

# Generate a random hello message.
def generate_hello(parts=config.hello_components, length=config.hello_avg_length, variance=config.hello_variance):
    size = int(random_with_variance(length,variance))
    message = ""
    for i in range(size):
        message =  message + " " + random.choice(parts)
        
    return message

# Say "hello" in trex-speak
def say_hello(instance = config.zinstance):
    message = generate_hello()
    send_trex_zephyr(message, instance)
    return message

# [Special action] with user
def send_special(key,instance="personal"):
    message_generator = config.special_messages[key]
    message = message_generator(instance)
    send_trex_zephyr(message, instance)
    return message

# Has it been long enough to send a message?
def time_to_send(init_time,interval,variance):
    delta = random_with_variance(interval,variance)
    return (time.time() - init_time > delta)

# Do this if we're being run as a script (and not imported)
if __name__ == "__main__":
    # Initialize the zephyr library
    zephyr.init()
    # Subscribe to messages
    subs = zephyr.Subscriptions()
    subs.add((config.zclass,"*","*"));
    
    last_send = 0
    
    while True:
        if time_to_send(last_send, config.hello_interval, config.hello_variance):
            print "Saying hello!\nMessage: " + say_hello()
            last_send = time.time()
        
        m = zephyr.receive()
        
        if m != None and m.sender != config.zsender and m.cls == config.zclass and \
                m.fields[1] != "":
           
            contents = m.fields[1]
            print "Got message: " + contents
            time.sleep(random_with_variance(3,2))
            
            responded = False
            for match in config.special_messages.keys():
                if match(contents):
                    print "Responding to keyword with: " + send_special(match,m.instance)
                    responded = True
                    break;

            if responded: pass
            elif random.random() < config.respond_prob:
                print "Saying hello!\nMessage: " + say_hello(m.instance)
        
        time.sleep(1)
