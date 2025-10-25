// Listing 6.10 sweetie1.c -- a counting loop
#include <stdio.h>

int main(void){
	const int NUMBER = 22;
	int count = 1;                      // counter initialization
	
	while (count <= NUMBER){		    // entry condition
		printf("Be my Valentine!\n");	// action
		count++;                        // counter incrementation
	}
	
	return 0;
}
