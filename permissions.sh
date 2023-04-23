# <Nana Boateng> <Amoah>
# <03/17/23>
# <Course Code: CS-475W-1>
# License: Copyright <2023> <Nana Boateng Amoah>
# Resources used: <Lecture 6 and 7 from Class slides> 
# Worked with < > 
# < A thread manager for managing processes> 


# file 
file = "$1"

# add execution permission to the script file
chmod u+x permissions.sh

# run a makefile
make -f $1 || exit