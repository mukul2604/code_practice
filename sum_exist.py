#! /usr/bin/python


def doesExist(arr, l ,r, sum):
	if l > r and sum != 0:
		return False
	if sum == 0:
		return True
	else:
		return (doesExist(arr, l+1,r,sum) or doesExist(arr, l+1, r, sum-arr[l]))

def main():
	sum = input()
	arr = map(int, raw_input().strip().split())
	L= len(arr)
	if (doesExist(arr, 0, L-1, sum) == True):
		print "Sum exist in the array\n"
	else:
		print "Sum doesn't exist in the array\n"

if __name__ == "__main__":
	main()
	
