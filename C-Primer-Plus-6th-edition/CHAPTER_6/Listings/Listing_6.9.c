// Listing 6.9 boolean.c -- using a _Bool variable
#include <stdio.h>

int main(void){
	long num;
	long sum = 0L;
	int input_is_good;
	
	printf("Please enter an integer for futher summing ");
	printf("(q to quit): ");
	input_is_good = (scanf("%ld", &num) == 1);
	while (input_is_good){
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
	input_is_good = (scanf("%ld", &num) == 1);
	}
	printf("Those integers sum is %ld.\n", sum);
	
	return 0;
}
