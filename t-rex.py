import zephyr
import time
import random

# Are we debugging or not?
debug=False
# Define some general zephyr configuration variables
zclass = "t-rex"
zinstance = "personal"
zsender = "t-rex"
zsig = "T. Rex"
# Variables that affect the frequency of t-rex messages
HOUR = 60*60
MINUTE = 60
SECOND = 1
hello_interval = 4*HOUR
hello_variance = 1*HOUR
respond_prob = 0.95
# Variables that affect the hello messages (words multipled by relative frequencies)
hello_components = ["rawr! "] + ["rawr"]*5 + ["raawr"]*3 + ["raaawr"]*2 + ["raaaawr"]*3 + ["RAWR"] + ["rawr. "]*2 + \
                   ["RAAAAAWR!\n"] + ["/raawr/"] + ["rawr\n"]
hello_avg_length = 7
hello_variance = 5

# Function for simple string matching for special-case messages
matches = lambda x: lambda y: y.lower().find(x) >= 0
# Function for simple string output for special message responses
p = lambda x: lambda y: x
# Variables that define special-case message responses
special_messages = {matches("cuddle"):p("raaawr *cuddles*"),
                    matches("cuddly"):p("raaawr *cuddles*"),
                    matches("dance"):p("rawr! *dance dance*"),
                    matches(":("):p("*alligatorface*"),
                    matches(":/"):p("rawr... :/"),
                    matches("tasty"):p("*NOM NOM NOM*"),
                    matches("sleep"):p("*enters pillow mode*")}

# Initialize the zephyr library
zephyr.init()
# Subscribe to messages
subs = zephyr.Subscriptions()
subs.add((zclass,"*","*"));

# Generate a random number centered around center and with the given variance
def random_with_variance(center,variance):
    return center + ((2*variance)*random.random() - variance)

# Send a zephyr as t-rex, on the given instance
def send_trex_zephyr(message, inst=zinstance):
    if not debug: zephyr.ZNotice(cls=zclass, instance=inst, sender=zsender, fields=[zsig,message]).send()

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

# [Special action] with user
def send_special(key,instance="personal"):
    message_generator = special_messages[key]
    message = message_generator(instance)
    send_trex_zephyr(message, instance)
    return message

# Has it been long enough to send a message?
def time_to_send(init_time,interval,variance):
    delta = random_with_variance(interval,variance)
    return (time.time() - init_time > delta)

# Do this if we're being run as a script (and not imported)
if __name__ == "__main__":
    last_send = 0
    
    while True:
        if time_to_send(last_send, hello_interval, hello_variance):
            print "Saying hello!\nMessage: " + say_hello()
            last_send = time.time()
        
        m = zephyr.receive()
        
        if m != None and m.sender != zsender and m.cls == zclass and \
                m.fields[1] != "":
           
            contents = m.fields[1]
            print "Got message: " + contents
            time.sleep(random_with_variance(3,2))
            
            responded = False
            for match in special_messages.keys():
                if match(contents):
                    print "Responding to keyword with: " + send_special(match,m.instance)
                    responded = True
                    break;

            if responded: pass
            elif random.random() < respond_prob:
                print "Saying hello!\nMessage: " + say_hello(m.instance)
        
        time.sleep(1)
