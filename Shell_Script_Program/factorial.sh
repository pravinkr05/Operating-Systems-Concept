#!/bin/bash
echo "Implementation of sum of natural no."
echo "Enter a no. : "
read a1
n=1
mul=1
k=1
while [ $n -le $a1 ]
do
k=$n*$k
mul=$(( $n * $mul ))
((n++))
done
echo ""
echo "Factorial $k : $mul"
