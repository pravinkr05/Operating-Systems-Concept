#!/bin/bash
echo "Implementation of sum of natural no."
echo "Enter a no. : "
read a
n=0
sum=0
k=0
while [ $n -le $a ]
do
k=$n+$k
sum=$(( $n+$sum ))
((n++))
done
echo ""
echo "Total sum $k : $sum"
