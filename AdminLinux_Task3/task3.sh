#!/bin/bash


if [ -f ~/.bashrc ]; then
    # Append new environment variables to .bashrc
    echo "export HELLO=\$HOSTNAME" >> ~/.bashrc
    echo "LOCAL=\$(whoami)" >> ~/.bashrc

    
    gnome-terminal & 

    echo "Environment variables appended to .bashrc."
    echo "New terminal opened."
else
    echo ".bashrc not found in the home directory"
fi
