#4. Write a shell script to determine whether a given number is prime or not
#====================================================================================


#!/bin/bash

echo "enter the number "
read n
for ((i=2; i -eq n ; i++))
do
if [( n % i ) -eq 0 ]
echo " given number is not prime "

elif
echo " given number the is prime "

fi
done
