#include "libs/core.h"

void testFunkcija(void); // Prototip funkcije

int main(void) { // Glavna funkcija

    testFunkcija();

    return 0;
}

void testFunkcija(void)
{
    /* Test scenario za biblioteku formiranjeNiza.h */
    int n;
    int niz[50]; // Jednodimenzionalni niz

    brojElemenataNiza(&n); // Poziv nase funkcije
    formiranjeNiza(niz, n); // Unos elemenata niza
    ispisElemenataNiza(niz, n); // Ispis elemenata niza
    /* Kraj test scenarija za biblioteku formiranjeNiza.h */


     /* Test scenario za biblioteku pretrazivanjeNiza.h */
     preDirektiva();
     /* Kraj test scenarija za biblioteku pretrazivanjeNiza.h */

     /* Test scenario za biblioteku sortiranjeNiza.h */
     brojElemenataNiza(&n); // Poziv nase funkcije
     formiranjeNiza(niz, n); // Unos elemenata niza
     sortiranjeElemenataNiza(niz, n); // Sortiranje elemenata niza
     ispisElemenataNiza(niz, n); // Ispis elemenata niza
     /* Test scenario za biblioteku sortiranjeNiza.h */


    return;
}
