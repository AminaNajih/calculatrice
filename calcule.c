#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
    int A , B ;
	char op ,q;
	printf("veuillez saisir la valeur de A : ");
	scanf("%d",&A);
	printf("veuillez saisir l'operateur : ");
	scanf(" %c", &op);
	printf("veuillez saisir la valeur de B : ");
	scanf("%d", &B);
	switch ( op )  {
		case '+' : printf("A+B =%d",A+B);
	     	break;
		case '-' : printf("A-B =%d", A-B);
		    break;
	    case '*' : printf("A*B =%d", A*B);
		    break;
        case '/' : if(B!=0)
		                printf("A/B =%d",A/B); 
		            else
		                printf("la division par 0 est impossible");
		            break;
		default : printf("L'operateur est incorrect");
		            break;
	}
	printf("veuillez saisir q pour quitte");
	scanf("%c",q);
	return 0;
}
