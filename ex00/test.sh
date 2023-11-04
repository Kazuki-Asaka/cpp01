#!/bin/bash

output="$(./a.out )"

expected_output="akazuki: BraiiiiiiinnnzzzZ...
akazuki is destroy
akazukin: BraiiiiiiinnnzzzZ...
akazuking: BraiiiiiiinnnzzzZ...
akazuking is destroy
akazukin is destroy"

if [ "$output" = "$expected_output" ]
then
	echo "ok"
else
	echo "ko"
	# echo $output
	# echo $expected_output
    printf "expected:\n$expected_output\n"
    printf "actual:\n$output\n"
fi