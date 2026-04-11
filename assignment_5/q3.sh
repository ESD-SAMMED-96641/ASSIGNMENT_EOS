#Write a shell script to accept the name from the user and check whether user entered
#name is file or directory. If name is file display its size and if it is directory display its contents.
#=========================================================================================

#!/bin/bash
echo " name "
read name

if [ -f "$name" ]
then 
echo " $name is file "
 ls -s "$name"

elif [ -d $name ]
then
echo "$name is directory "
 ls -s "$name"

fi
