import zephyr

zclass = "t-rex"
zinstance = "rawr"
zsender = "t-rex"
zsig = "T. Rex"


zephyr.init()

zephyr.ZNotice(cls=zclass, instance=zinstance, sender=zsender, fields=[zsig,"rawr!"]).send()
