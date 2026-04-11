#5. Write a Program to find the greatest of three numbers
#====================================================================================

#!/bin/bash
echo " enter n1 "
read n1
echo " enter n2 "
read n2
echo " enter n3 "
read n3

if [[ $n1 -gt $n2 && $n1 -gt $n3 ]]
then 
echo " $n1 is greatest than $n2 and $n3 "

 elif [[ $n1 -gt $n2 && $n1 -gt $n3 ]]
 then
 echo " $n2 is greatest than $n1 and $n3 "

 else
 echo " $n3 is greatest than $n1 and $n2 "
fi
