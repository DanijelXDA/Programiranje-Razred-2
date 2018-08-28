#include "libs/core.h"

int main(void)
{
    int n;
    int niz[50]; // Jednodimenzionalni niz

    brojElemenataNiza(&n); // Poziv nase funkcije
    formiranjeNiza(niz, n); // Unos elemenata niza

    return 0;
}
