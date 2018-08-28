#ifndef FORMIRANJENIZA_H_INCLUDED
#define FORMIRANJENIZA_H_INCLUDED

void formiranjeNiza(int niz[], unsigned brojElemenata) {
    int i;

    for(i = 0; i < brojElemenata; i++) {
        printf("\nUnesite niz[%d] = ", i);
        scanf("%d", &niz[i]);
    }
}


#endif // FORMIRANJENIZA_H_INCLUDED
