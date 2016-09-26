#! /usr/bin/python
import sys
stocks = map(int,raw_input().strip().split())
n = len(stocks)

st_stack = [0]
res = [1]

def top_index(list):
	return list[len(list)-1]

for i in xrange(1,n):
	if stocks[i] < stocks[top_index(st_stack)]:
		span = i - top_index(st_stack)
		res.append(span)
		st_stack.append(i)
	else:
		while (len(st_stack) > 0 and stocks[i] >= stocks[top_index(st_stack)]):
			st_stack.pop()
		
		if len(st_stack) == 0:
			span = i+1
			res.append(span)
			st_stack.append(i)
		else:
			span = i - top_index(st_stack)
			res.append(span)
			st_stack.append(i)	
print res
