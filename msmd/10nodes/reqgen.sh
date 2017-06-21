#!/bin/bash

a=1

while ((a<=50))
do
	python genreq.py ${a}
	((a=a+1))

done
