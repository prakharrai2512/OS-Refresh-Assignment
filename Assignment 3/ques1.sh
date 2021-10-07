#!/bin/bash

if [ $# != 3 ]
then
	echo Please enter date as dd mm yyyy
else
	if [ $3 -lt 0 ]
	then
		echo Year is wrong
	elif [ $2 -lt 1 ] && [ $2 -gt 12 ]
	then
		echo Month is wrong
	else
		dm="$2 $3"
		days=$(cal $dm | awk -v temp=0 '{temp=temp+NF}; END {print temp-9}')
		if [ $1 -gt $days ] || [ $1 -lt 0 ]
		then
			echo Invalid day
		else
			cal $dm
		fi
	fi
fi