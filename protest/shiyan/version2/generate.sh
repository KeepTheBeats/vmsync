#!/bin/bash

declare -i a=11

while ((a<=20))
do
	echo "a=${a}"
	if [ ${a} -lt 10 ] 
	then
		./suiji.py > /mnt/Share/0${a}.txt
	else 
		./suiji.py > /mnt/Share/${a}.txt
	fi
	a=${a}+1
done
