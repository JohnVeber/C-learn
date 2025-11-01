// Listing 6.16 do_while.c -- loop with precondition
#include <stdio.h>

int main(void){
	const int secret_code = 13;
	int code_entered;
	printf("To enter the club,\n");
    printf("enter the secret code please: ");
	scanf("%d", &code_entered);
	while(code_entered != secret_code){
		printf("To enter the club,\n");
        printf("enter the secret code please: ");
		scanf("%d", &code_entered);
	} 
	printf("Great, you've entered!\n");
	
    return 0;
}
