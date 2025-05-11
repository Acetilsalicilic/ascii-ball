#!/bin/bash
source_files=$(find . -name "*.c")

gcc -c $source_files

if [ $? == 0 ]; then
    object_files=$(find . -name "*.o")

    gcc -g -o ball $object_files
fi

# clean
object_files=$(find . -name "*.o")
rm $object_files
