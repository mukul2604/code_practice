#! /usr/bin/python
import sys

arr = map(int,raw_input().strip().split())
max_so_far = 0
max_ending_here = 0

for x in arr:
	max_ending_here = max_ending_here + x
	if max_ending_here < 0:
		max_ending_here = 0
	if max_so_far < max_ending_here:
		max_so_far = max_ending_here

print "MaxSubArray Sum: {}".format(max_so_far)

