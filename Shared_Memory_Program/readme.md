student@student-HP-EliteDesk-800-G1-TWR:~/2020ITB$ gcc shmem_sender.c -o sender
student@student-HP-EliteDesk-800-G1-TWR:~/2020ITB$ gcc shmem_receiver.c -o receiver
student@student-HP-EliteDesk-800-G1-TWR:~/2020ITB$ ./sender

======================================================================
key of shared memory is 44
process attached at 0x7a524a22f000
Enter to send the year's data :
2222
you wrote 2222
======================================================================

student@student-HP-EliteDesk-800-G1-TWR:~/2020ITB$ ./receiver

======================================================================
key of shared memory is 44
process attached at 0x7dac9f041000
year's data read from shared mem is 2222
this is not leap year
======================================================================

student@student-HP-EliteDesk-800-G1-TWR:~/2020ITB$ ./sender

======================================================================
key of shared memory is 44
process attached at 0x71685d79c000
Enter to send the year's data :
2020
you wrote 2020
======================================================================

student@student-HP-EliteDesk-800-G1-TWR:~/2020ITB$ ./receiver

======================================================================
key of shared memory is 44
process attached at 0x7dc5c7a67000
year's data read from shared mem is 2020
this is leap year
======================================================================
