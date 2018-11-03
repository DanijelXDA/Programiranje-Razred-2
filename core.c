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

     /* Test scenario za biblioteku rotiranjeNizaUlevo.h */
     brojElemenataNiza(&n); // Poziv nase funkcije
     formiranjeNiza(niz, n); // Unos elemenata niza
     rotiranjeNizaUdesno(niz, n);
     ispisElemenataNiza(niz, n); // Ispis elemenata niza
     /* Test scenario za biblioteku rotiranjeNizaUlevo.h */


    return;
}
