#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int coe,exp,exp1,i;
	float ele=-1;
	int ele2=1;
	float coef=1;
	int fac=1;
	int fact=0;
	float b;
	float taylor=0;
	
		printf ("ingrese el valor de coeficiete (x)\n");
		scanf ("%i",&coe);
	do{	
		printf ("ingrese el valor del exponente (n)\n");
		scanf("%i",&exp);
	}while(exp<0);
	exp1=exp/2;
	for (i=0;i<=exp1;i=i+1)
	{
		ele=ele*-1;
		ele2=coe*i+1;
		fact+=ele2;
		
		coef=pow(coe,ele2);	
		 
		printf ("coeficiente :%f\n",coef);

		b=factorial(ele2);
		printf ("factorial:%f\n",b);
		taylor+=ele*coef/b;
	}
		printf ("la aproximacion de taylor es:%f\n",taylor);
		
	return 0;
}
int factorial(int a)
{
	  float fac=1;
	int i;
	for (i=1;i<=a;i=i+1)
		{
		fac*=i;
		}
		return (fac);
}
