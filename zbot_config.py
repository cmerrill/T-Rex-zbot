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

