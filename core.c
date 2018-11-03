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
    int niz[100]; // Jednodimenzionalni niz


     /* Test scenario za biblioteku ubacivanjeElementaUNiz.h */
     brojElemenataNiza(&n); // Poziv nase funkcije
     formiranjeNiza(niz, n); // Unos elemenata niza
     n = ubacivanjeNaKPozicijuUNizu(niz, n); // Ubacivanje broja na k-tu poziciju
     ispisElemenataNiza(niz, n); // Ispis elemenata niza
     /* Test scenario za biblioteku ubacivanjeElementaUNiz.h */


    return;
}
