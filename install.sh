#!/bin/bash
echo "Moving the program to /usr/bin..."
sudo cp ~/ossd-mark-cal/apps/ossd-mark-cal.out /usr/bin/ossd-mark-cal.out
echo "Creating the ossdmk command in /usr/local/bin/ossdmk..."
sudo cp ~/ossd-mark-cal/apps/ossdmk /usr/local/bin/ossdmk
echo "Cleaning up the environment."
rm -Rf ~/ossd-mark-cal 
cd ~
echo "Installation Complete! Please type ossdmk to get started."