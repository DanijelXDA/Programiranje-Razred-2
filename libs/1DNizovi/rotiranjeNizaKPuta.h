#ifndef ROTIRANJENIZAKPUTA_H_INCLUDED
#define ROTIRANJENIZAKPUTA_H_INCLUDED

#include "formiranjeNiza.h" // Biblioteka potrebna da formiramo niz
#include "rotiranjeNiza.h"

void rotiranjeKPutaUlevo(int niz[], int n)
{
    int i, k;

    do {
        printf("\nUnesite koliko puta rotirate niz ulevo: ");
        scanf("%d", &k);
    } while( k < 1);

    for(i = 0; i < k; i++) // Rotiranje k puta
        rotiranjeNizaUlevo(niz, n); // Rotiranje ulevo;

}

void rotiranjeKPutaUdesno(int niz[], int n)
{
    int i, k;

    do {
        printf("\nUnesite koliko puta rotirate niz ulevo: ");
        scanf("%d", &k);
    } while( k < 1);

    for(i = 0; i < k; i++) // Rotiranje k puta
        rotiranjeNizaUdesno(niz, n); // Rotiranje ulevo;

}
#endif // ROTIRANJENIZAKPUTA_H_INCLUDED
