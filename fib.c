#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	if(n<2)
		return 1;
	else{
		return fib(n-2)+fib(n-1);
	}
}

int main(int argc, char **argv)
{
	int i = atoi(argv[1]);
	printf("%d\n",fib(i));
}