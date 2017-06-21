#!/bin/bash

python gennet.py

b=1

while ((b<=10))
do
	if ((b<10))
	then
		itm net0${b}.script
		sgb2alt net0${b}.script-0.gb net0${b}.alt
	else
		itm net${b}.script
		sgb2alt net${b}.script-0.gb net${b}.alt
	fi
	((b=b+1))
done

rm *.gb *.script
