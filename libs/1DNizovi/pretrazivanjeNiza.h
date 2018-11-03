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

    return;
}

// Definicija funkcije
int pretrazivanjeNiza(int niz[], int n) {
    int broj;
    int i;

    printf("\nUnesite koji broj trazite u nizu: ");
    scanf("%d", &broj);

    // Prikazuje svako pojavljivanje traženog broja u nizu
    for(i = 0; i < n; i++) {
        if( niz[i] == broj ) {
            printf("\nTrazeni broj ( %d ) se nalazi na %d. poziciji u nizu.", broj, i);
        }
    }
    return 0; // 0- Sve je u redu; !0 -> Greška
}

#endif // PRETRAZIVANJENIZA_H_INCLUDED
