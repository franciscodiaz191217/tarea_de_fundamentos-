#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void elevaciones (void );


int main(int argc, char *argv[]) {
	int coe,exp;
	float i,ele=1;
	float  fac=1;
	float acum=1;

	printf ("ingrese el coeficiente(X)\n");
	scanf("%i",&coe);
	do{
		printf ("el exponente(n)\n");
		scanf("%i",&exp);
	}while(exp<=0);
		for(i=1;i<=exp;i=i+1)
		{
			fac=fac*i;
		 	ele=ele*coe;
			acum=acum+ele/fac;
		 	printf ("fac:%i  /  ele:%  %f\n",fac,ele,acum);	
		}
	printf (" taylor :%f",acum);
	return 0;
}
