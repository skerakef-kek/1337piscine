#!/bin/sh 
ifconfig | sed 's/[[:space:]]//' | grep ^ether | cut -d ' ' -f 2
