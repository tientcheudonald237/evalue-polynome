//tientcheu takou maurice donald 21Q2439
#include "eval_polynome.h"
#include<stdio.h>
#include<stdlib.h>

float puissance(float a, int i) //calcule "a" à la puissance "i" 
{
	int k; float p=1;
	for(k=1;k<=i;k++){
		p=p*a;
	}
//	printf("%f exposant %d = %f \n",a,i,p); 
	return p;
}

float* creer_polynome(int n)//alloue l'esoace en memoire pour stocker le polynome 
{
	float *tab = (float*)malloc(sizeof(float)*n);
	return tab ;
}

float eval_polynome(float* poly, int n, float a) //Evalue un polynome poly de taille n par rapport a 'a' 
{
  int i; float s=0;
	for(i=0;i<=n;i++){
		s = s + puissance(a,i) * poly[i] ; 
	}
	return s;
}

float eval_polynome_horneur(float* tab, int n, float number){
	float *tab2 = (float*)malloc(sizeof(float)*n);
	float *tab3 = (float*)malloc(sizeof(float)*n);
	tab3[n] = tab[n];
	int i;
	for(i=n;i>0;i--){
		tab2[i-1] = tab3[i]*number;
		tab3[i-1] = tab[i-1] + tab2[i-1];
	}
	return tab3[0];
}



float* remplire_polynome(float* tab,int n)//rempli les valeurs d'un polynome
{
	int i;
	for(i=0 ;i<=n ;i++){
		printf("entrer l'element de x exposant %d : ",i);
		scanf("%f",&tab[i]);
	}
	return tab ;
}
