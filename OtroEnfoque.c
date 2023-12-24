#include <stdio.h>

void dibujarLetra(char letra);

void imprimirCaracter(unsigned short espacio);

void dibujarLetra(char letra)
{
    int i, j;
    int size = 11;

    // Matriz que contiene los patrones de las letras
    const char* letras[26] = {
        "  A      B  CCCCC DDDDD   EEE   FFFFF GGGGG   H   IIIII   J  K  K   L     M     N   N OOO   P     Q   Q   RRRR  SSS   T   U   U V   V  X   X Y   Y  Z",
        " A A    B B  C     D   D  E     F     G     H H    I    J J  K K    L   L M M M N N N O   O P P   Q   Q R   R  S    T   U   U V   V   X X   Y Y   Z ",
        "A   A   B B  C     D   D  EEE   FFFF  G  GG HH      I    J J    K     L   L M M M N  NN O   O P P   Q   Q RRRR    S    T   U   U V   V    X     Y    Z  ",
        "AAAAA   BB   C     D   D  E     F     G   G HHHHH    I    J J    K  K  L   L M M M N   N O   O PPP    Q   Q R  RR    S    T   U   U  V V     X     Y   Z   ",
        "A   A   B B  C     D   D  EEE   F     G   G H   H    I    J J    KK     L   L M M M N   N O   O P      Q   Q R   R    S    T   U   U   V      X    Y  Z    ",
        "A   A   B B  C     D   D  E     F     GGGGG H   H    I    J J    K  K  L   L M M M N   N O   O P       QQQQ  R    SSS    T   U   U    V     X     Y Z     ",
        "A   A   B B  CCCCC DDDDD   EEE   F     G   G H   H  IIIII   J  K  K   L   L M M M N   N  OOO   P         Q   R     S     T    UUU     V    X     YZ      "
    };

    // Determinar el índice de la letra en el alfabeto
    int index = (letra >= 'A' && letra <= 'Z') ? letra - 'A' : letra - 'a';

    // Verificar si es una letra válida
    if (index < 0 || index >= 26) {
        printf("Caracter no válido.\n");
        return;
    }

    // Iterar sobre cada fila de la matriz de patrones
    for (i = 0; i < size; i++) {
        // Iterar sobre cada columna de la matriz de patrones
        for (j = 0; j < size; j++) {
            char c = letras[index][i * size + j];
            if (c != ' ')
                imprimirCaracter(1);
            else
                imprimirCaracter(0);
        }
        printf("\n");
    }
}

void imprimirCaracter(unsigned short espacio)
{
    if (espacio)
        printf("*");
    else
        printf(" ");
}

int main(void)
{
    char letraIngresada;

    printf("Ingrese una letra: ");
    letraIngresada = getchar();
    printf("\n");

    dibujarLetra(letraIngresada);

    return 0;
}

