#Write a shell script to accept a filename as argument and displays the last modification
#time if the file exists and a suitable message if it doesn’t exist.
#========================================================================================
#check file exisst or not , if exist print last modification
#for check time use man stat , %y for human redable time
#=========================================================================================

#!/bin/bash

echo " enter file name "
read file

if [ -f "$file" ]
then
echo " file exist in directory "
stat -c %y $file

else
echo " file not exist "
 fi
#=========================================================================================
