#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float n1 = 0, n2 = 0;
    int oper;
    
    do {
    	printf("\nEscolha o seu operador: \n");
        printf("\n\t (1) - SOMA\n\t (2) - SUBTRACAO\n\t (3) - MULTIPLICACAO\n\t (4) - DIVISAO\n\t (5) - SAIR\n");
        scanf("%i", &oper);
        
        if (oper == 5) {
        	printf("Programa encerrado pelo usuario.\n");
        	exit(0);
		}
        else {
        	printf("\n\tInforme o primeiro valor: ");
        	scanf("%f", &n1);
        	printf("\n\tInforme o segundo valor: ");
        	scanf("%f", &n2);
		}
		
        switch (oper) {
        	case 1:
        		printf("\n\tO resultado da Soma e: %0.2f", n1 + n2);
            	break;
        	case 2:
        		printf("\n\tO resultado da Subtracao e: %0.2f", n1 - n2);
            	break;
        	case 3:
        		printf("\n\tO resultado da Multiplicacao e: %0.2f", n1 * n2);
            	break;
        	case 4:
        		printf("\n\tO resultado da Divisao e: %0.2f", n1 / n2);
            	break;
        	default:
            	printf("\n\tInforme uma opcao valida");
            	break;
        }
        
        printf("\n\tDigite 1 para continuar: ");
        scanf("%i", &oper);
    } while (oper == 1);
}
