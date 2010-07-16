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
# Variables that affect the hello messages (words multipled by relative frequencies)
hello_components = ["rawr! "] + ["rawr"]*5 + ["raawr"]*3 + ["raaawr"]*2 + ["raaaawr"]*2 + ["RAWR"] + ["rawr. "]*2 + \
                   ["RAAAAAWR! "] + ["/raawr/"] + ["\n"]
hello_avg_length = 5
hello_variance = 3

# Initialize the zephyr library
zephyr.init()

# Send a zephyr as t-rex, on the given instance
def send_trex_zephyr(message, inst=zinstance):
    zephyr.ZNotice(cls=zclass, instance=inst, sender=zsender, fields=[zsig,message]).send()

# Generate a random hello message.
def generate_hello(parts=hello_components, length=hello_avg_length, variance=hello_variance):
    size = int(length + ((2*variance)*random.random() - variance))
    message = ""
    for i in range(size):
        message =  message + " " + random.choice(parts)
        
    return message

# Say "hello" in trex-speak
def say_hello():
    message = generate_hello()
    print "Message = " + message
    send_trex_zephyr(message)

# Cuddle with user
def cuddle():
    send_trex_zephyr("raaawr *cuddles*")

def time_to_send(init_time,interval,variance):
    delta = interval + ((2*variance)*random.random() - variance)
    return (time.time() - init_time > delta)

# Do this if we're being run as a script (and not imported)
if __name__ == "__main__":
    last_send = 0
    
    while True:
        if time_to_send(last_send, hello_interval, hello_variance):
            print "Saying hello!"
            say_hello()
            last_send = time.time()
        
        time.sleep(3)
