#!/usr/bin/env python

import random

i=1

while(i<=10):
	sui1 = random.uniform(1,10000)
	if(i<10):
		fi=open("net0"+str(i)+".script","w+")
	else:
		fi=open("net"+str(i)+".script","w+")
	aa = "geo 1 "+str(sui1)+"\n"+"10 20 3 0.2"
	fi.write(aa)
	fi.close()
	i = i+1
