#!/bin/bash
echo "Enter user name :"
read user
admin="$(id -u -n)"
if [ "$user" = "$admin" ]
then

echo "user logged in"
echo "successfully"
else
echo "user not logged in"
echo "Hint! user name : $admin"
fi
