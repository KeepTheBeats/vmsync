#!/bin/bash

declare -i a=1

while ((a<=2))
do
	mkdir version${a}
	a=${a}+1
done
