// Listing 6.1 summing.c -- the program sums integers that are entered interactively
#include <stdio.h>

void Temperatures(double FAR);

int main(void){
	long num;
	long sum = 0L;
	int status;

	printf("Input an integer please, for futher summing");
	printf("(or q to finish the program):\n");
	status = scanf("%ld", &num);  
	while (status == 1)	{
	    sum = sum + num;
	    printf("Input an integer please, for futher summing (or q to finish the program):");
    	status = scanf("%ld", &num);
	}
	printf("Sum of entered numbers are %ld.\n",sum);
	
	return 0;
}
