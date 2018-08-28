#ifndef FORMIRANJENIZA_H_INCLUDED
#define FORMIRANJENIZA_H_INCLUDED

int *brojElemenataNiza(int *pok) {
    do {
        printf("\nUnesite velicinu niza (velicina niza mora biti veca od 0 i manja od 50) = ");
        scanf("%d", pok);
    } while( *pok < 0 || *pok > 50); // Limitacija na određeni opseg

    return pok;
}

void formiranjeNiza(int niz[], int brojElemenata) {
    int i;

    printf("\nUnos elemenata niza:\n");
    for(i = 0; i < brojElemenata; i++) {
        printf("\tUnesite niz[%d] = ", i);
        scanf("%d", &niz[i]);
    }
    return;
}

void ispisElemenataNiza(int *p, int n) {
    int i;

    printf("\nIspis elemenata niza:\n");
    for(i = 0; i < n; i++) {
        printf("\tVrednost niz[%d] = %d\n", i, *(p + i)); // Isto kao p[i]
    }
    return;
}


#endif // FORMIRANJENIZA_H_INCLUDED
