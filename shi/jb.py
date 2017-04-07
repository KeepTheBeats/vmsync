#!/usr/bin/python

import random

f=file("ts200.script","w+")
b=random.uniform(0,100000)
aa=["geo 1 ",str(b),"\n","10 10 3 0.3"]
f.writelines(aa)
f.close
