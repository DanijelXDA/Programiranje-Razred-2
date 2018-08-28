#include "libs/core.h"

int main(void)
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

    return 0;
}
