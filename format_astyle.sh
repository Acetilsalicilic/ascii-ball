#!/bin/bash

files=$(ls | grep -E "\.(c|h)")

for file in $files;
do
    astyle -A1 ./$file
done
