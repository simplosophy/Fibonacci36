import sys
def fib(n):
	if n<2:
		return 1
	else:
		return fib(n-2) + fib(n-1)

print fib(int(sys.argv[1]))