import zephyr
import time
import random

# Define some general zephyr configuration variables
zclass = "t-rex"
zinstance = "test"
zsender = "t-rex"
zsig = "T. Rex"
# Variables that affect the frequency of t-rex messages
HOUR = 60*60
MINUTE = 60
SECOND = 1
hello_interval = 4*HOUR
hello_variance = 1*HOUR
respond_prob = 0.85
# Variables that affect the hello messages (words multipled by relative frequencies)
hello_components = ["rawr! "] + ["rawr"]*5 + ["raawr"]*3 + ["raaawr"]*2 + ["raaaawr"]*3 + ["RAWR"] + ["rawr. "]*2 + \
                   ["RAAAAAWR!\n"] + ["/raawr/"] + ["\n"]
hello_avg_length = 7
hello_variance = 5

# Initialize the zephyr library
zephyr.init()
# Subscribe to messages
subs = zephyr.Subscriptions()
subs.add((zclass,"*","*"));

def random_with_variance(center,variance):
    return center + ((2*variance)*random.random() - variance)

# Send a zephyr as t-rex, on the given instance
def send_trex_zephyr(message, inst=zinstance):
    zephyr.ZNotice(cls=zclass, instance=inst, sender=zsender, fields=[zsig,message]).send()

# Generate a random hello message.
def generate_hello(parts=hello_components, length=hello_avg_length, variance=hello_variance):
    size = int(random_with_variance(length,variance))
    message = ""
    for i in range(size):
        message =  message + " " + random.choice(parts)
        
    return message

# Say "hello" in trex-speak
def say_hello(instance = zinstance):
    message = generate_hello()
    send_trex_zephyr(message, instance)
    return message

# Cuddle with user
def cuddle(instance = "cuddles"):
    send_trex_zephyr("raaawr *cuddles*", instance)

def time_to_send(init_time,interval,variance):
    delta = random_with_variance(interval,variance)
    return (time.time() - init_time > delta)

# Do this if we're being run as a script (and not imported)
if __name__ == "__main__":
    last_send = 0
    
    while True:
        if time_to_send(last_send, hello_interval, hello_variance):
            print "Saying hello!"
            print "Message: " + say_hello()
            last_send = time.time()
        
        m = zephyr.receive()
        
        if m != None and m.sender != "t-rex" and random.random() < respond_prob:
            contents = m.fields[1]
            print "Responding to message: " + contents
            time.sleep(random_with_variance(5,2))
            
            if contents.lower().find("cuddle") > 0 or contents.lower().find("cuddly") > 0:
                print "Cuddling with user!"
                cuddle(m.instance)
            else:
                print "Saying hello!\nMessage: " + say_hello(m.instance)
        
        time.sleep(1)
