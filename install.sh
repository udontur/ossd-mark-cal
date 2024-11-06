#!/bin/bash
echo "Moving ossd-mark-cal.out to /usr/bin"
sudo cp ~/ossd-mark-cal/ossd-mark-cal.out /usr/bin/ossd-mark-cal.out
echo "Creating the ossdmk command in /usr/local/bin/ossdmk"
sudo cp ~/ossd-mark-cal/ossdmk /usr/local/bin/ossdmk
echo "Cleaning up the github repository"
rm -Rf ~/ossd-mark-cal 
echo "Installation Complete! Please type ossdmk to get started"