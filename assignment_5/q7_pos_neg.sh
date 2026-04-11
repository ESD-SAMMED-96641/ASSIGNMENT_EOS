#7. Write a Program to find whether a given number is positive or negative
#==============================================================================
#!/bin/bash
echo " enter n1 "
read n1

if [ $n1 -lt 0 ]
then 
echo " number is negative "
else
echo " number is positive "
fi
