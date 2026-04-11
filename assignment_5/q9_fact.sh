#9. Write a program to find the factorial of given number.
#========================================================================================
#!/bin/bash
echo "num"
read num
fact=1
while [ $num -gt 1 ]
do 
fact=$((fact * $num))
num=$((num - 1))
done
echo "$fact"
