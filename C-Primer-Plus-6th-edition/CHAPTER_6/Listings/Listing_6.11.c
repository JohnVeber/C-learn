// Listing 6.11 sweetie2.c -- a  loop "for" with a counter
#include <stdio.h>

int main(void){
	const int NUMBER = 22;
	int count;
	
	for (count = 1; count <= NUMBER; count++)
		printf("Be my Valentine!\n");
	
	return 0;
}
// There is a typo in line 8 in my book. The version in the book :
//  for (count = 1; count <= 100; count++) 