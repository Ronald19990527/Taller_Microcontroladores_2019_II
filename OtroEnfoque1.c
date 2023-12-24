#include <stdio.h>
#include <stdlib.h>

int compararPalabras(const void *a, const void *b) {
    const char *palabra1 = *(const char **)a;
    const char *palabra2 = *(const char **)b;
    return strcasecmp(palabra1, palabra2);
}

int main(void) {
    char string[] = "bólso bÓLSO bolso BOLSA bolsoTO belgico BELGICÓ Bélgica belgica Bódega bÓdeGA artesino ártes artes arter arteria artésano artesano";
    char *palabras[100]; // Suponemos que no habrá más de 100 palabras en el string
    int numPalabras = 0, i = 0;

    // Extraer las palabras del string
    char *token = strtok(string, " ");
    while (token != NULL) {
        palabras[numPalabras] = token;
        numPalabras++;
        token = strtok(NULL, " ");
    }

    // Ordenar las palabras alfabéticamente
    qsort(palabras, numPalabras, sizeof(char *), compararPalabras);

    // Imprimir las palabras ordenadas
    printf("Palabras en orden alfabético:\n");
    for (i = 0; i < numPalabras; i++) {
        printf("%s ", palabras[i]);
    }
    printf("\n");

    return 0;
}
