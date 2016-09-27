#! /usr/bin/python
sumd = input()
arr = map(int,raw_input().strip().split())
s = 0 
for x in arr:
	if s <= sumd:
		s = s + x
	else:
		s = 0

if sumd == s:
	print 'YES'
