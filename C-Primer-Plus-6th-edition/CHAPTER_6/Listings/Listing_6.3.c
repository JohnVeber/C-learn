/* Listing 6.3 while1.c -- watch your curly braces */
/* bad coding can leads to an infinite loop */
#include <stdio.h>

int main(void){
	int n = 0;
	while (n < 3)
		printf("n is %d\n", n); 
		n++;
		//To avoid infinite cycle use {} to group operators in unite block (compound statement)
		/*
		{
		printf("n is %d\n", n); 
		n++;		
		}
		*/
	printf("That's all this program does.\n");
	
	return 0;
}
