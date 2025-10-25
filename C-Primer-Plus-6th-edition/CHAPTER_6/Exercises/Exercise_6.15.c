// Exercises 6.15 Printing a line in reverse order.

/*  Write a program that reads in a line of input and then prints the line in reverse order.
Input can be stored in an array of chars; length of line is no longer than 255 characters.
Recall that you can use scanf() with the %c specifier to read a character at
a time from input and that the newline character (\n) is generated when you press "Enter".  */
 
 
#include <stdio.h>
#define SIZE 255                                          // Array size limit

int main(void){
	int i = 0;                                            // Counter of array elements
	char a[SIZE];
	
	printf("Please enter a line of input:\n");
	do{
		scanf("%c", &a[i]);
		i++;
	} while (a[i - 1] != '\n');                          // Exit the loop in case "Enter" pressed immediately
	
	while (i >= 2){                                      // "2" uses because of "\n" and "\0" characters inside array
		printf("%c", a[i - 2]);                          // begin with a[i - 2] so "\n" won't be printed
		i--;
	}
	printf("\n");
	printf("See you next time!\n");
	
	return 0;
}
