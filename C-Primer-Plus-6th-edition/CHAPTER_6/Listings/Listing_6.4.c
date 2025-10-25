/* Listing 6.4 while2.c -- put semicolons in a right manner */
#include <stdio.h>

int main(void){
	int n = 0;
	while (n++ < 3); //The cycle ends here due to ";". 
		printf("n is %d\n", n); // This raw isn't a cycle part.
	printf("That's all this program does.\n");
	
	return 0;
}
/* If you want to use an empty operator after the cycle - put ";" to the next raw, 
but not just after the operator "while".*/