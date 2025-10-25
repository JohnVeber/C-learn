/* Listing 6.5 cmpflt.c -- floating-point comparisons */
#include <math.h>
#include <stdio.h>

int main(void){
	const double ANSWER = 3.14159;
	double response;
	
	printf("What is the value of pi?\n");
	scanf("%lf", &response); // Use "." as delimeter in your answer.
	while (fabs(response - ANSWER) > 0.001){
		printf("Try again!\n");
		scanf("%lf", &response);
	}
	printf("Close enough!\n");
	
	return 0;
}
