#include <stdio.h>
#include <stdlib.h>

int compararPalabras(const void *a, const void *b) {
    const char *palabra1 = *(const char **)a;
    const char *palabra2 = *(const char **)b;
    return strcasecmp(palabra1, palabra2);
}

int main(void) {
    char string[] = "b�lso b�LSO bolso BOLSA bolsoTO belgico BELGIC� B�lgica belgica B�dega b�deGA artesino �rtes artes arter arteria art�sano artesano";
    char *palabras[100]; // Suponemos que no habr� m�s de 100 palabras en el string
    int numPalabras = 0, i = 0;

    // Extraer las palabras del string
    char *token = strtok(string, " ");
    while (token != NULL) {
        palabras[numPalabras] = token;
        numPalabras++;
        token = strtok(NULL, " ");
    }

    // Ordenar las palabras alfab�ticamente
    qsort(palabras, numPalabras, sizeof(char *), compararPalabras);

    // Imprimir las palabras ordenadas
    printf("Palabras en orden alfab�tico:\n");
    for (i = 0; i < numPalabras; i++) {
        printf("%s ", palabras[i]);
    }
    printf("\n");

    return 0;
}
