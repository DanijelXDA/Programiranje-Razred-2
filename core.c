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


     /* Test scenario za biblioteku izbacivanjeElementaIzNiza.h */
     brojElemenataNiza(&n); // Poziv nase funkcije
     formiranjeNiza(niz, n); // Unos elemenata niza
     n = izbacivanjeIzNiza(niz, n);
     ispisElemenataNiza(niz, n); // Ispis elemenata niza
     /* Test scenario za biblioteku izbacivanjeElementaIzNiza.h */


     /* Test scenario za biblioteku rotiranjeNiza.h */
     brojElemenataNiza(&n); // Poziv nase funkcije
     formiranjeNiza(niz, n); // Unos elemenata niza
     rotiranjeNizaUlevo(niz, n); // ROTIRANJE ULEVO ZA JEDNO MESTO
     ispisElemenataNiza(niz, n); // Ispis elemenata niza
     /* Test scenario za biblioteku rotiranjeNiza.h */


     /* Test scenario za biblioteku rotiranjeNiza.h */
     brojElemenataNiza(&n); // Poziv nase funkcije
     formiranjeNiza(niz, n); // Unos elemenata niza
     rotiranjeNizaUdesno(niz, n); // ROTIRANJE UDESNO ZA JEDNO MESTO
     ispisElemenataNiza(niz, n); // Ispis elemenata niza
     /* Test scenario za biblioteku rotiranjeNiza.h */

    /* Test scenario za biblioteku rotiranjeNizaKPuta.h */
     brojElemenataNiza(&n); // Poziv nase funkcije
     formiranjeNiza(niz, n); // Unos elemenata niza
     rotiranjeKPutaUlevo(niz, n); // ROTIRANJE UDESNO ZA JEDNO MESTO
     ispisElemenataNiza(niz, n); // Ispis elemenata niza
     /* Test scenario za biblioteku rotiranjeNizaKPuta.h */

     /* Test scenario za biblioteku ubacivanjeElementaUNiz.h */
     brojElemenataNiza(&n); // Poziv nase funkcije
     formiranjeNiza(niz, n); // Unos elemenata niza
     n = ubacivanjeNaKPozicijuUNizu(niz, n); // Ubacivanje broja na k-tu poziciju
     ispisElemenataNiza(niz, n); // Ispis elemenata niza
     /* Test scenario za biblioteku ubacivanjeElementaUNiz.h */

    /* Test scenario za biblioteku bubbleSort.h */
     brojElemenataNiza(&n); // Poziv nase funkcije
     formiranjeNiza(niz, n); // Unos elemenata niza
     bubbleSortiranjeNiza(niz, n); // bubble sort - Sortiranje Niza
     ispisElemenataNiza(niz, n); // Ispis elemenata niza
     /* Test scenario za biblioteku bubbleSort.h */

    return;
}
