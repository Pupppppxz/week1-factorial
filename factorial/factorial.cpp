#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int number;
	unsigned long long result = 1;
	printf("enter a positive integer : ");
	scanf("%d", &number);
	if (number < 0) {
		printf("please enter a positive integer");
	}
	else if (number > 0) {
		for (int i = 1; i <= number; ++i) {
			result *= i;
		}
		printf("%d! = %d", number, result);
	}
	else {
		printf("0! = 0");
	}
	return 0;
}