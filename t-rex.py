import zephyr
import time
import random

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


# Initialize the zephyr library
zephyr.init()

# Send a zephyr as t-rex, on the given instance
def send_trex_zephyr(message,inst=zinstance):
    zephyr.ZNotice(cls=zclass, instance=inst, sender=zsender, fields=[zsig,"rawr!"]).send()

# Say "hello" in trex-speak
def say_hi():
    send_trex_zephyr("rawr!")

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
            say_hi()
            last_send = time.time()
        
        time.sleep(3)
