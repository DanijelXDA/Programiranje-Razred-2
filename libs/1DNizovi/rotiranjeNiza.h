#ifndef ROTIRANJENIZA_H_INCLUDED
#define ROTIRANJENIZA_H_INCLUDED

#include "formiranjeNiza.h" // Biblioteka potrebna da formiramo niz

void rotiranjeNizaUlevo(int niz[], int n)
{
    int i, temp;

    printf("\n\nRotiranje elemenata niza ulevo\n");

    temp = niz[0]; // Cuvamo poslednji element u nizu
    for(i = 0; i < n - 1; i++) {
        niz[i] = niz[i + 1]; // Pomeranje udesno
    }
    niz[n - 1] = temp;

    return;
}

void rotiranjeNizaUdesno(int niz[], int n)
{
    int i, temp;

    printf("\n\nRotiranje elemenata niza udesno\n");

    temp = niz[n - 1]; // Cuvamo poslednji element u nizu
    for(i = n - 2; i >= 0; i--) {
        niz[i + 1] = niz[i]; // Pomeranje udesno
    }
    niz[0] = temp;

    return;
}

#endif // ROTIRANJENIZA_H_INCLUDED
