#!/bin/sh

##################################
###### FILE MAKER INSTALLER ######
##################################

if [ "$EUID" -ne 0 ]
then echo "Please run as root"
     exit
fi

gcc -Wall -Werror -Wextra -pedantic *.c -o file_maker
sudo mv file_maker /usr/bin

echo "Done!"
