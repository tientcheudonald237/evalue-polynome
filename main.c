//tientcheu takou maurice donald 21Q2439
#include "eval_polynome.h"
#include<stdio.h>
#include<stdlib.h>


int main()
{	
	int n;float val,ant;
	float *tab;
	printf("entrer la dimension de la fonction f(x):");
	scanf("%d",&n);
	tab = creer_polynome(n);
	tab = remplire_polynome(tab,n);
	printf("entrer la valeur dont on veut calculer son image : ");
	scanf("%f",&ant);
	val = eval_polynome(tab,n,ant);
	printf("f(%.3f) = %.3f \n",ant,val);
	val = eval_polynome_horneur(tab,n,ant);
	printf("f(%.3f) = %.3f \n",ant,val);
 	printf("Ça marche, Merci \n");
	return 0;
}
