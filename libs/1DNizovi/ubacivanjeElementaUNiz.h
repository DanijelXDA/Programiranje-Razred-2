#ifndef UBACIVANJEELEMENTAUNIZ_H_INCLUDED
#define UBACIVANJEELEMENTAUNIZ_H_INCLUDED

#include "formiranjeNiza.h" // Biblioteka potrebna da formiramo niz

int ubacivanjeNaKPozicijuUNizu(int niz[], int n)
{
    int i, k, broj;

    do {
        printf("\n\nUnesite na koju poziciju ubacujete broj: ");
        scanf("%d", &k);
    } while( k < 1);

    printf("\nUnesite koji broj ubacujete na %d. poziciju u nizu: ", k);
    scanf("%d", &broj);

    n++; // Jedno mesto vise za novi element u nizu
    for(i = n - 2; i > k; i--)
        niz[i] =  niz[i + 1]; // Pomeranje udesno za jedno mesto

    niz[k] = broj; // Upis broja na k-to mesto u nizu

    return ++n;
}

#endif // UBACIVANJEELEMENTAUNIZ_H_INCLUDED
