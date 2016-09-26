#! /usr/bin/python
import sys

pest = map(int, raw_input().strip().split())
n = len(pest)
st_pest = [0]
res = []
curr_min = 0

def top_index(list):
	assert (len(list) > 0)
	return len(list)-1

for i in xrange(1,n):
	if pest[i] < pest[st_pest[top_index(st_pest)]]:
		st_pest.append(i)
		curr_min = top_index(st_pest)
			
