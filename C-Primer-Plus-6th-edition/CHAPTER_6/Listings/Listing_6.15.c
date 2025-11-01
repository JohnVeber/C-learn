// Listing 6.15 do_while.c -- loop with postcondition
#include <stdio.h>

int main(void){
	const int secret_code = 13;
	int code_entered;
	do{
        printf("To enter the club,\n");
        printf("enter the secret code please: ");
        scanf("%d", &code_entered);
	} while (code_entered != secret_code);
	printf("Great, you've entered!\n"); // This condition requires the next code untill the correct one has been entered
	
    return 0;
}
