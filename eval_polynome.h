//tientcheu takou maurice donald 21Q2439
#ifndef __EVAL_POLYNOME_H
#define __EVAL_POLYNOME_H

#include "eval_polynome.h"

float puissance(float a, int i);

float eval_polynome(float* poly, int n, float a);

float* creer_polynome(int n);

float eval_polynome_horneur(float* tab, int n, float number);

float* remplire_polynome(float* tab,int n);

#endif
