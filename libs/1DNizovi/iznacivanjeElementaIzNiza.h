#ifndef IZNACIVANJEELEMENTAIZNIZA_H_INCLUDED
#define IZNACIVANJEELEMENTAIZNIZA_H_INCLUDED

#include "formiranjeNiza.h" // Biblioteka potrebna da formiramo niz

void brisanjeElementa(int [], int, int); // Prototip funkcije

int izbacivanjeIzNiza(int niz[], int n)
{
    int broj;

    printf("\nUnesite koji broj izbacujete iz niza: ");
    scanf("%d", &broj);

    for(int i = 0; i < n; i++) {
        if(niz[i] == broj)
        {
            brisanjeElementa(niz, i, n);
            break;
        }
    }
    return --n; // Azuriranje broja elemenata niza
}

void brisanjeElementa(int niz[], int pozicija, int n)
{
    // Izbacivanje prvog pojavljivanja
    for(int i = pozicija; i < n - 1; i++) {
        niz[i] = niz[i + 1];
    }

    return;
}

#endif // IZNACIVANJEELEMENTAIZNIZA_H_INCLUDED
