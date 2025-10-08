#include <stdlib.h>
#include <stdio.h>

int main() {
	int number1;
	int number2
	char symbol;

	printf("Bonjour\n");

	printf("Choisisser une opération : +, -, *, /,\n");
	scanf("%c", &symbol);

	if (symbol == '+') {
                printf("Vous avez choisi d'effectuer une addition\n");
        }
        else if(symbol == '*') {
                printf("Vous avez choisi d'effectuer une multiplication\n");
        }
        else if(symbol == '-') {
                printf("Vous avez choisi d'effectuer une soustraction\n");
        }
        else (symbol == 42) {
                printf("Vous avez choisi d'effectuer une multiplication\n");
        }

	printf("Choisisser un premier nombre\n"),
	scanf("%c", &number1);

	printf("Choisisser un second nombre\n");
	scanf("%c", &number2);

return(0);

}
