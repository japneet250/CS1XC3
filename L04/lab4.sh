#!/bin/bash

# Use First Argument As Working Directory
WDIR="$1"
cd "$WDIR"

if [ "$2" -eq 1 ] ; then
    if [ -f file1.txt ] ; then
         true
    else 
      touch file1.txt
      echo "singj93" > file1.txt 

    fi        
elif [ "$2" -eq 2 ] ; then
    if [ -f file1.txt ] ; then
       if [ -d backup ] ; then
         cp "file1.txt" ./backup
        else 
           mkdir backup
           cp "file1.txt" ./backup
        fi   
   fi

elif [ "$2" -eq 3 ] ; then   
    if [ -f backup/file1.txt ] ; then
        echo backup/file1.txt > ./
        rm backup/file1.txt
    else
      true
    fi       



elif [ $# == 3 ] ; then
    if [ "$2" -eq 1 ] ; then
      if [ -f $3 ] ; then
         true
      else 
        touch $3
        echo "singj93" > $3

      fi        
    elif [ "$2" -eq 2 ] ; then
       if [ -f $3 ] ; then
          if [ -d backup ] ; then
             cp "$3" ./backup
          else 
             mkdir backup
             cp "$3" ./backup
          fi   
       fi

    elif [ "$2" -eq 3 ] ; then   
       if [ -f backup/$3 ] ; then
           echo backup/$3 > ./
           rm backup/$3
        else
          true
        fi    
    fi

    


elif [ $# -gt 3 ] ; then
   if [ -f excess.txt ] ; then
     echo excess.txt > ./
    else 
       touch excess.txt
    fi   

    for i in $@ ; do 
       if [ "$i" == "$1" ] || [ "$i" == "$2" ] || [ "$i" == "$3" ]; then 
          true
        elif [ "$i" -ge "$3" ]; then 
              echo "$i" >> excess.txt
        fi   
    done 
        


fi

echo "Finished"
