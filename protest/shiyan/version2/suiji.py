#!/usr/bin/env python

import random

#a=random.randint(1,30)
#b=random.randint(1,30)

i=0

while (i<=56):
	print("x"+str(i)+"a"+"+x"+str(i)+"b"+"<="+str(random.randint(10,40))+";")
	print("")
	i=i+1

print("")
print("min=")
i=0
while (i<=56):
	if(i!=0):
		print("+"),
	print("(x"+str(i)+"a+x"+str(i)+"b)*"+str(random.randint(3,15))),
	if(i%2==1):
		print("")
	i=i+1

print("")
print("")
s=random.randint(1,34)
t=random.randint(1,34)
while(s==t):
	t=random.randint(1,34)

print("s:"+str(s)+"  t:"+str(t)+"  rw:"+str(random.randint(1,15)))
