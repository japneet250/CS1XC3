#!/bin/bash

# Use First Argument As Working Directory
WDIR="$1"
cd "$WDIR"

filename="file1.txt"


if [ $# -eq 3 ] ; then
  filename="$3"
fi



if [ $# -gt 3 ] ; then
   if [ -f excess.txt ] ; then
       touch excess.txt
    else
       touch excess.txt
    fi

    for i in $@ ; do
       if [ "$i" == "$1" ] || [ "$i" == "$2" ] || [ "$i" == "$3" ]; then
          true
       else
           echo $i >> excess.txt
        fi
    done

fi


if [ "$2" -eq 1 ] ; then
    if [ -f $filename ] ; then
         true
    else
      touch $filename
      echo "$USER" > $filename

    fi
elif [ "$2" -eq 2 ] ; then
    if [ -f $filename ] ; then
       if [ -d backup ] ; then
         cp $filename ./backup
        else
           mkdir backup
           cp $filename ./backup
        fi
   fi

elif [ "$2" -eq 3 ] ; then
    if [ -f backup/$filename ] ; then
        touch $filename
        echo "$USER" > $filename
        rm backup/$filename
    else
      true
    fi


fi

echo "Finished"
