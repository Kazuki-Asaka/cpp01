#!/bin/bash

output="$(./a.out )"

expected_output="newZombie hahahaha
newZombie hahahaha
newZombie hahahaha
newZombie hahahaha
newZombie hahahaha
akazuki: BraiiiiiiinnnzzzZ...
akazuki: BraiiiiiiinnnzzzZ...
akazuki: BraiiiiiiinnnzzzZ...
akazuki: BraiiiiiiinnnzzzZ...
akazuki: BraiiiiiiinnnzzzZ...
N is invalid
akazuki is destroy
akazuki is destroy
akazuki is destroy
akazuki is destroy
akazuki is destroy"

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