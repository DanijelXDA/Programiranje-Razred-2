#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED

#include "formiranjeNiza.h" // Biblioteka potrebna da formiramo niz

void bubbleSortiranjeNiza(int niz[], int n)
{
    int i, j, dalje, temp;

    for(dalje = 1, i = 0; i < n - 1 && dalje; i++)
        for(dalje = 0, j = n - 1; j > i; j--)
            if( niz[j - 1] < niz[j] ) {
                temp = niz[j - 1];
                niz[j - 1] = niz[j];
                niz[j] = temp;
                dalje = 1;
            }
}

#endif // BUBBLESORT_H_INCLUDED
