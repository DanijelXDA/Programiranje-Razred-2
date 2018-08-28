#ifndef PRETRAZIVANJENIZA_H_INCLUDED
#define PRETRAZIVANJENIZA_H_INCLUDED

#include "formiranjeNiza.h" // Biblioteka potrebna da formiramo niz


// Prototip funkcije
int pretrazivanjeNiza(int[], int);

void preDirektiva(void) {
    int n;
    int niz[50];

    brojElemenataNiza(&n);
    formiranjeNiza(niz, n);

    pretrazivanjeNiza(niz, n);
}



#endif // PRETRAZIVANJENIZA_H_INCLUDED
