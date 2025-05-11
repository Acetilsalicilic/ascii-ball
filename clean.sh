#!/bin/bash
exclude_files=$(ls | grep -v -E "\.[c|h|sh]$")

echo $exclude_files
#rm $exclude_files
