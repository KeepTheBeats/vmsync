#!/bin/bash


echo "hello world!"

declare -i a=2
#a=2
b="I don't think so."
while ((a<10))
do
	echo "a is ${a}, is that? ${b}"
	a=${a}+1
done
