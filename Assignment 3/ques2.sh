#!/bin/bash

if [ "$1" == "add" ]
then
    tot=0
    for i in ${@:2}
    do
    tot=$(bc <<< "$tot + $i")	
    done
    echo $tot
elif [ "$1" == "sub" ]
then
    tot=$2
    for i in ${@:3}
    do
    tot=$(bc <<< "$tot - $i")	
    done
    echo $tot
elif [ "$1" == "mul" ]
then
    tot=1
    for i in ${@:2}
    do
    tot=$(bc <<< "$tot * $i")	
    done
    echo $tot
elif [ "$1" == "div" ]
then
    tot=$2
    for i in ${@:3}
    do
    tot=$(bc <<< "scale=8 ; $tot / $i")	
    done
    echo $tot
elif [ "$1" == "exp" ]
then
    tot=$2
    for i in ${@:3}
    do
    tot=$(bc <<< "$tot ^ $i")	
    done
    echo $tot
fi
