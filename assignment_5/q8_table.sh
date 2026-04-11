#8. Write a program to print the table of a given number.
#==================================================================

echo " enter number "
read num 
i=1
until [ $i -gt 10 ]
do
echo "` expr $i \* $num `"
i=`expr $i + 1`
done
