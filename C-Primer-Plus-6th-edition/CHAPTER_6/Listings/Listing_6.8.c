/* Listing 6.8 trouble.c -- incorrect usage of "="
 will cause infinite loop */
#include <stdio.h>

int main(void){
	long num;
	long sum = 0L;
	int status;
	
	printf("Please enter an integer for futher summing ");
	printf("(q to quit): ");
	status = scanf("%ld", &num);
	while (status = 1){ 
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		status = scanf("%ld", &num);
	}
	printf("Those integers sum to %ld.\n", sum);
	
	return 0;
}
// Wrong assignment operator "=" in raw 13 lead to an infinity cycle;
// Use relational operator "==" instead to avoid it.
