#!/bin/bash

if [ -d documentation ] ; then 
   if [ -d documentation/docs ] ;then
       true 
   else 
      mkdir docs

   fi 
else 
   mkdir documentation
   mkdir documentation/docs

fi 
