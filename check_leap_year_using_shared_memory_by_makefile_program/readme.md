student@student-HP-EliteDesk-800-G1-TWR:~/2020ITB$ make
gcc a.c -o a
./a

======================================================================
key of shared memory is 44
process attached at 0x73a8db3d8000
Enter to send the year's data :
hii
you wrote hii
======================================================================

gcc b.c -o b
./b

======================================================================
sending the data...
======================================================================

make: *** No rule to make target 'c.c', needed by 'p3'.  Stop.
student@student-HP-EliteDesk-800-G1-TWR:~/2020ITB$ make
gcc a.c -o a
./a

======================================================================
key of shared memory is 44
process attached at 0x7eb4cc97e000
Enter to send the year's data :
how
you wrote how
======================================================================

gcc b.c -o b
./b

======================================================================
sending the data...
======================================================================

gcc c.c -o c
./c

======================================================================
key of shared memory is 44
process attached at 0x71b8c8a18000
year's data read from shared mem is how
this is leap year
======================================================================

student@student-HP-EliteDesk-800-G1-TWR:~/2020ITB$
