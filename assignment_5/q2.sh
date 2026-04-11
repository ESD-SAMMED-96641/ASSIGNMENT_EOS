#Write a shell script to display menu like “1. Date, 2. Cal, 3. Ls, 4. Pwd, 5. Exit” 
#execute the commands depending on user choice.
#--------------------------------------------------------------------

#!/bin/bash
while true
do
echo "enter choice (n)  1.DATE, 2.CAL , 3. LS , 4. PWD , 5. EXIT "
echo " enter choice  : "
read choice 
case $choice in 
1) date ;;
2) cal ;;
3) ls ;;
4) pwd ;;
5) break ;;
esac 
done

