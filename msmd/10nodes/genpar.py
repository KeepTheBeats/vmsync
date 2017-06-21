#!/usr/bin/env python

import random
import sys

if __name__ == "__main__":

	i=1
	while(i<=10):
		if(i<10):
			fil=open("par0"+str(i)+".txt","w+")
		else:
			fil=open("par"+str(i)+".txt","w+")

		j=1
		while(j<=45):
			bb = str(random.uniform(3,15))+" "+str(random.uniform(30,120))+"\n"
			fil.write(bb)
			j=j+1

		fil.close()
		i=i+1



