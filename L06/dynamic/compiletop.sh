#!/bin/bash

if [ $# -ge 1 ]; then
       	gcc -L/home/singj93/CS1XC3/L06/dynamic -Wl,-rpath=/home/singj93/CS1XC3/L06/dynamic -Wall -o test top.c -lLab6Part5 

else 
  echo "Provide 1"

fi  
