#Write a program to calculate gross salary if the DA is 40%, HRA is 20% of basic salary.
#Accept basic salary form user and display gross salary (Result can be floating point
#value).
#========================================================================================
while true
do
echo "enter basic salary"
read bsal #base salary
#======================================================================================
 #DA = allowance
#HRA = home rent allowance
#asal = actual salary
#=====================================================================================
DA=$(echo "scale=2; $bsal * 0.4" | bc)
HRA=$(echo "scale=2; $bsal * 0.2" | bc)
asal=$(echo "scale=2; $bsal + $DA + $HRA" | bc)
#====================================================================================
echo " your DA : $DA "
echo "your HAR : $HRA "
echo " your actual salary : $asal "
done
#====================================================================================

