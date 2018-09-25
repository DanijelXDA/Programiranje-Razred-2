#ifndef SORTIRANJEELEMENATAIZNIZA_H_INCLUDED
#define SORTIRANJEELEMENATAIZNIZA_H_INCLUDED

#include "formiranjeNiza.h" // Biblioteka potrebna da formiramo niz

// Prototip funkcije za rotiranje elemenata niza
void rotirajElemente(int [], int, int);


void sortiranjeElemenataNiza(int niz[], int velNiza) {
    int i, j; // Pomocne promenljive

    // Selection sort metoda sortiranja
    for(i = 0; i < velNiza - 1; i++) {
        for(j = i + 1; j < velNiza; j++) {
            if(niz[i] > niz[j]) // > Za rastući poredak, < za opadajući
                rotirajElemente(niz, i, j); // Funkcija koja rotira elemente niza
        }
    }
    return;
}

#endif // SORTIRANJEELEMENATAIZNIZA_H_INCLUDED
