#include <stdio.h>

int print_sum(int a, int b);

int main(void)
{
	int result = print_sum(100,100);
	printf("result: %d\n", result);
	return (0);
}

int print_sum(int a, int b)
{
	return (a+b);
}
