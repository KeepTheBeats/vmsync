#!/usr/bin/env python

import random
import sys

if __name__ == "__main__":
	a = random.randint(2,10)

	if(int(sys.argv[1])<10):
		fil=open("req0"+sys.argv[1]+".txt","w+")
	else:
		fil=open("req"+sys.argv[1]+".txt","w+")
	fil.write(str(a)+"\n")
	i = 1
	while(i<=a):
		s = random.randint(0,9)
		t = random.randint(0,9)

		while(s==t):
			t = random.randint(0,9)

		bb = str(s)+" "+str(t)+" "+str(random.uniform(10,30))+"\n"


		fil.write(bb)
		i=i+1
	
	fil.close()


