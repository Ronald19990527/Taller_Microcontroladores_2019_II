/* 6) RETO 
Realice un programa en C que pida una tecla (caractér entre a - z) y que sea dibujada en con la misma
letra.

Ejemplo:

ingrese una letra: z

Salida del programa:

zzzzzzzzzz
        z
       z
      z
     z
    z
   z
  z
 z
zzzzzzzzzz */

#include <stdio.h>
#include <stdlib.h>

void dibujarLetraMayuscula( unsigned char letraMayuscula, unsigned short fila, unsigned short columna );

void dibujarLetraMinuscula( unsigned char letraMinuscula, unsigned short fila, unsigned short columna );

void iterarFilasColumnas ( unsigned char caracter );

unsigned short imprimirCaracter( unsigned char letra );

unsigned short imprimirCaracter( unsigned char letra ) {
	printf( "%c", letra );

	return 1;
}

void dibujarLetraMayuscula( unsigned char letraMayuscula, unsigned short fila, unsigned short columna )
{
	unsigned short espacio = 0;

	switch ( letraMayuscula ) {
		case 'A':
			if ( ( ( ( fila >=  1 && fila <= 5 ) && ( fila + columna == 7 || columna - fila == 5 ) ) || ( fila == 6 && ( columna >= 1 && columna <= 11 ) ) ) || ( ( fila >= 7 && fila <= 11 ) && ( columna == 1 || columna == 11 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'B':
			if ( ( ( ( ( fila == 1 || fila == 6 ) || fila == 11 ) && ( columna >= 2 && columna <= 9 ) ) || ( columna == 1 && ( fila >= 1 && fila <= 11 ) ) ) || ( ( columna == 10 || columna == 11 ) && ( ( fila + columna == 15 || fila + columna == 20 ) || ( columna - fila == 3 || columna - fila == 8 ) ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'C':
			if ( ( ( ( fila == 1 || fila == 11 ) && ( columna >= 3 && columna <= 11 ) ) || ( columna == 1 && ( fila >= 3 && fila <= 9 ) ) ) || ( columna == 2 && ( fila == 2 || fila == 10 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'D':
			if ( ( ( ( columna == 1 && ( fila >= 1 && fila <= 11 ) ) || ( ( fila == 1 || fila == 11 ) && ( columna >= 2 && columna <= 9 ) ) ) || ( ( fila >= 3 && fila <= 9 ) && columna == 11 ) ) || ( columna == 10 && ( fila == 2 || fila == 10 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'E':
			if ( ( ( fila == 1 || ( fila == 6 || fila == 11 ) ) && ( columna >= 1 && columna <= 11 ) ) || ( columna == 1 && ( ( fila >= 2 && fila <= 5 ) || ( fila >= 7 && fila <= 10 ) ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'F':
			if ( ( ( fila == 1 || fila == 6 ) && ( columna >= 1 && columna <= 11 ) ) || ( columna == 1 && ( ( fila >= 2 && fila <= 5 ) || ( fila >= 7 && fila <= 11 ) ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'G':
			if ( ( ( ( fila == 1 && ( columna >= 2 && columna <= 11 ) ) || ( fila == 11 && ( columna >= 2 && columna <= 10 ) ) ) || ( ( columna == 1 && ( fila >= 2 && fila <= 10 ) ) || ( columna == 11 && ( fila >= 7 && fila <= 10 ) ) ) ) || ( fila == 6 && ( columna >= 6 && columna <= 10 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'H':
			if ( ( ( columna == 1 || columna == 11 ) && ( fila >= 1 && fila <= 11 ) ) || ( fila == 6 && ( columna >= 2 && columna <= 10 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'I':
			if ( ( ( fila == 1 || fila == 11 ) && ( columna >= 1 && columna <= 11 ) ) || ( columna == 6 && ( fila >= 2 && fila <= 10 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'J':
			if ( ( ( ( fila == 1 && ( columna >= 1 && columna <= 11 ) ) || ( columna == 6 && ( fila >= 2 && fila <= 10 ) ) ) || ( fila == 11 && ( columna >= 2 && columna <= 5 ) ) ) || ( fila == 10 && columna == 1 ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'K':
			if ( ( ( columna == 1 && ( fila >= 1 && fila <= 11 ) ) || ( ( columna >= 7 && columna <= 11 ) && ( columna == fila || fila == 11 - columna + 1 ) ) ) || ( fila == 6 && ( columna >= 2 && columna <= 6 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'L':
			if ( ( columna == 1 && ( fila >= 1 && fila <= 11 ) ) || ( fila == 11 && ( columna >= 2 && columna <= 11 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'M':
			if ( ( ( columna == 1 || columna == 11 ) && ( fila >= 1 && fila <= 11 ) ) || ( ( ( columna >= 2 && columna <= 10 ) && ( fila >= 2 && fila <= 6 ) ) && ( fila == columna || fila == 11 - columna + 1 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'N':
			if ( ( ( columna == 1 || columna == 11 ) && ( fila >= 1 && fila <= 11 ) ) || ( ( columna >= 2 && columna <= 10 ) && ( fila == columna ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'O':
			if ( ( ( ( fila == 1 || fila == 11 ) && ( columna >= 3 && columna <= 9 ) ) || ( ( columna == 1 || columna == 11 ) && ( fila >= 3 && fila <= 9 ) ) ) || ( ( fila == 2 || fila == 10 ) && ( columna == 2 || columna == 10 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'P':
			if ( ( ( columna == 1 && ( fila >= 1 && fila <= 11 ) ) || ( ( fila == 1 || fila == 6 ) && ( columna >= 2 && columna <= 9 ) ) ) || ( ( columna == 10 || columna == 11 ) && ( columna - fila == 8 || columna + fila == 15 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'Q':
			if ( ( ( ( ( fila == 1 || fila == 11 ) && ( columna >= 3 && columna <= 9 ) ) || ( ( columna == 1 || columna == 11 ) && ( fila >= 3 && fila <= 9 ) ) ) || ( ( fila == 2 || fila == 10 ) && ( columna == 2 || columna == 10 ) ) ) || ( ( fila == 9 && columna == 9 ) || ( fila == 11 && columna == 11 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'R':
			if ( ( ( ( columna == 1 && ( fila >= 1 && fila <= 11 ) ) || ( ( fila == 1 || fila == 6 ) && ( columna >= 2 && columna <= 9 ) ) ) || ( ( ( columna == 10 || columna == 11 ) && ( fila >= 2 && fila <= 5 ) ) && ( ( columna - fila == 8 || columna + fila == 15 ) || columna - fila == 4 ) ) ) || ( ( columna == 11 && ( fila >= 8 && fila <= 11 ) ) || ( columna == 10 && fila == 7 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'S':
			if ( ( ( ( fila == 1 && ( columna >= 3 && columna <= 11 ) ) || ( fila == 6 && ( columna >= 3 && columna <= 9 ) ) ) || ( fila == 11 && ( columna >= 1 && columna <= 9 ) ) ) || ( ( ( columna == 1 || columna == 2 ) && ( fila - columna == 3 || fila + columna == 4 ) ) || ( ( columna == 10 || columna == 11 ) && ( columna - fila == 3 || fila + columna == 20 ) ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'T':
			if ( ( fila == 1 && ( columna >= 1 && columna <= 11 ) ) || ( columna == 6 && ( fila >= 2 && fila <= 11 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'U':
			if ( ( ( ( columna == 1 || columna == 11 ) && ( fila >= 1 && fila <= 9 ) ) || ( fila == 11 && ( columna >= 3 && columna <= 9 ) ) ) || ( fila == 10 && ( columna == 2 || columna == 10 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'V':
			if ( ( ( ( columna == 1 || columna == 11 ) && ( fila >= 1 && fila <= 7 ) ) || ( ( fila >= 8 && fila <= 10 ) && ( fila - columna == 6 || fila + columna == 18 ) ) ) || ( fila == 11 && ( columna >= 5 && columna <= 7 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'W':
			if ( ( ( ( ( columna == 1 || columna == 6 ) || columna == 11 ) && ( fila >= 1 && fila <= 9 ) ) || ( ( columna >= 2 && columna <= 5 ) && ( fila - columna == 8 || fila + columna == 15 ) ) ) || ( ( columna >= 7 && columna <= 10 ) && ( fila - columna == 3 || fila + columna == 20 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
			break;

		case 'X':
			if ( fila == columna || fila == 11 - columna + 1 )
				espacio = imprimirCaracter( letraMayuscula );
		break;

		case 'Y':
			if ( ( ( fila >= 1 && fila <= 5 ) && ( fila == columna || fila == 11 - columna + 1 ) ) || ( columna == 6 && ( fila >= 6 && fila <= 11 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
		break;

		case 'Z':
			if ( ( ( fila == 1 || fila == 11 ) && ( columna >= 1 && columna <= 11 ) ) || ( ( fila >= 2 && fila <= 10 ) && ( fila == 11 - columna + 1 ) ) )
				espacio = imprimirCaracter( letraMayuscula );
		break;
	}

	if ( espacio == 0 ) {
		printf( " " );
	}
	else
		espacio = 0;
}

void dibujarLetraMinuscula( unsigned char letraMinuscula, unsigned short fila, unsigned short columna )
{
	unsigned short espacio = 0;

	switch ( letraMinuscula ) {
		case 'a':
			if ( ( ( ( ( fila == 6 || fila == 11 ) && ( columna >= 2 && columna <= 10 ) ) || ( fila == 1 && ( columna >= 1 && columna <= 10 ) ) ) || ( columna == 11 && ( fila >= 2 && fila <= 10 ) ) ) || ( columna == 1 && ( fila >= 7 && fila <= 10 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'b':
			if ( ( ( ( fila == 6 || fila == 11 ) && ( columna >= 2 && columna <= 10 ) ) || ( columna == 1 && ( fila >= 1 && fila <= 10 ) ) ) || ( columna == 11 && ( fila >= 7 && fila <= 10 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'c':
			if ( ( ( ( fila == 1 || fila == 11 ) && ( columna >= 3 && columna <= 11 ) ) || ( columna == 1 && ( fila >= 3 && fila <= 9 ) ) ) || ( columna == 2 && ( fila == 2 || fila == 10 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'd':
			if ( ( ( ( fila == 6 || fila == 11 ) && ( columna >= 2 && columna <= 10 ) ) || ( columna == 11 && ( fila >= 1 && fila <= 10 ) ) ) || ( columna == 1 && ( fila >= 7 && fila <= 10 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'e':
			if ( ( ( ( ( ( fila == 1 && ( columna >= 3 && columna <= 9 ) ) || ( fila == 6 && ( columna >= 2 && columna <= 9 ) ) ) || ( fila == 11 && ( columna >= 3 && columna <= 11 ) ) ) || ( ( columna == 1 || columna == 2 ) && ( fila + columna == 4 || fila - columna == 8 ) ) ) || ( ( columna == 10 || columna == 11 ) && ( columna - fila == 8 || fila + columna == 15 ) ) ) || ( columna == 1 && ( fila >= 4 && fila <= 8 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'f':
			if ( ( ( columna == 1 && ( fila >= 3 && fila <= 11 ) ) || ( fila == 6 && ( columna >= 2 && columna <= 11 ) ) ) || ( ( fila == 1 && ( columna >= 3 && columna <= 11 ) ) || ( fila == 2 && columna == 2 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'g':
			if ( ( ( ( fila == 1 && ( columna >= 3 && columna <= 9 ) ) || ( fila == 6 && ( columna >= 3 && columna <= 10 ) ) ) || ( ( fila == 11 && ( columna >= 2 && columna <= 9 ) ) || ( ( columna == 1 || columna == 2 ) && ( fila + columna == 4 || fila - columna == 3 ) ) ) ) || ( ( columna == 11 && ( fila >= 3 && fila <= 9 ) ) || ( ( columna == 10 && ( fila == 2 || fila == 10 ) ) || ( columna == 1 && fila == 10 ) ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'h':
			if ( ( ( ( ( columna == 1 && ( fila >= 1 && fila <= 11 ) ) || ( fila == 6 && ( columna >= 4 && columna <= 8 ) ) ) || ( ( columna >= 1 && columna <= 3 ) && ( fila + columna == 10 ) ) ) || ( ( columna >= 9 && columna <= 11 ) && ( columna - fila == 2 ) ) ) || ( columna == 11 && ( fila >= 9 && fila <= 11 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'i':
			if ( ( ( fila >= 1 && fila <= 3 ) || ( fila >= 5 && fila <= 11 ) ) && ( columna >= 5 && columna <= 7 ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'j':
			if ( ( ( ( ( fila == 4 && ( columna >= 1 && columna <= 6 ) ) || ( columna == 6 && ( fila >= 5 && fila <= 10 ) ) ) || ( fila == 11 && ( columna >= 2 && columna <= 5 ) ) ) || ( fila == 10 && columna == 1 ) ) || ( ( fila == 1 || fila == 2 ) && ( columna == 5  || columna == 6 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'k':
			if ( ( ( columna == 1 && ( fila >= 1 && fila <= 11 ) ) || ( ( columna >= 7 && columna <= 11 ) && ( columna == fila || fila == 11 - columna + 1 ) ) ) || ( fila == 6 && ( columna >= 2 && columna <= 6 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'l':
			if ( ( ( ( fila >= 1 && fila <= 10 ) && ( columna >= 5 && columna <= 7 ) ) || ( fila == 11 && ( columna >= 1 && columna <= 11 ) ) ) || ( fila == 1 && ( columna >= 1 && columna <= 4 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'm':
			if ( ( ( ( ( columna == 6 || columna == 11 ) && ( fila >= 3 && fila <= 11 ) ) || ( columna == 1 && ( fila >= 1 && fila <= 11 ) ) ) || ( ( columna >= 2 && columna <= 5 ) && ( fila + columna == 4 || columna - fila == 3 ) ) ) || ( ( columna >= 7 && columna <= 10 ) && ( fila + columna == 9 || columna - fila == 8 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'n':
			if ( ( ( ( ( columna == 1 && ( fila >= 1 && fila <= 11 ) ) || ( fila == 1 && ( columna >= 4 && columna <= 8 ) ) ) || ( ( columna >= 1 && columna <= 3 ) && ( fila + columna == 5 ) ) ) || ( ( columna >= 9 && columna <= 11 ) && ( columna - fila == 7 ) ) ) || ( columna == 11 && ( fila >= 5 && fila <= 11 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'o':
			if ( ( ( ( fila == 1 || fila == 11 ) && ( columna >= 3 && columna <= 9 ) ) || ( ( columna == 1 || columna == 11 ) && ( fila >= 3 && fila <= 9 ) ) ) || ( ( fila == 2 || fila == 10 ) && ( columna == 2 || columna == 10 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'p':
			if ( ( ( columna == 1 && ( fila >= 1 && fila <= 11 ) ) || ( ( fila == 1 || fila == 6 ) && ( columna >= 2 && columna <= 9 ) ) ) || ( ( columna == 10 || columna == 11 ) && ( columna - fila == 8 || columna + fila == 15 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'q':
			if ( ( ( columna == 11 && ( fila >= 1 && fila <= 11 ) ) || ( ( fila == 1 || fila == 6 ) && ( columna >= 3 && columna <= 10 ) ) ) || ( ( columna == 1 || columna == 2 ) && ( columna + fila == 4 || fila - columna == 3 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'r':
			if ( ( ( ( columna == 1 && ( fila >= 1 && fila <= 11 ) ) || ( fila == 1 && ( columna >= 4 && columna <= 8 ) ) ) || ( ( columna >= 1 && columna <= 3 ) && ( fila + columna == 5 ) ) ) || ( ( columna >= 9 && columna <= 11 ) && ( columna - fila == 7 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 's':
			if ( ( ( ( fila == 1 && ( columna >= 3 && columna <= 11 ) ) || ( fila == 6 && ( columna >= 3 && columna <= 9 ) ) ) || ( fila == 11 && ( columna >= 1 && columna <= 9 ) ) ) || ( ( ( columna == 1 || columna == 2 ) && ( fila - columna == 3 || fila + columna == 4 ) ) || ( ( columna == 10 || columna == 11 ) && ( columna - fila == 3 || fila + columna == 20 ) ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 't':
			if ( ( ( fila == 3 && ( columna >= 1 && columna <= 11 ) ) || ( columna == 6 && ( fila >= 1 && fila <= 9 ) ) ) || ( ( columna >= 7 && columna <= 11 ) && ( fila - columna == 3 || fila + columna == 20 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'u':
			if ( ( ( ( columna == 1 && ( fila >= 1 && fila <= 9 ) ) || ( columna == 11 && ( fila >= 1 && fila <= 11 ) ) ) || ( fila == 11 && ( columna >= 3 && columna <= 9 ) ) ) || ( fila == 10 && ( columna == 2 || columna == 10 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'v':
			if ( ( ( ( columna == 1 || columna == 11 ) && ( fila >= 1 && fila <= 7 ) ) || ( ( fila >= 8 && fila <= 10 ) && ( fila - columna == 6 || fila + columna == 18 ) ) ) || ( fila == 11 && ( columna >= 5 && columna <= 7 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'w':
			if ( ( ( ( ( columna == 1 || columna == 6 ) || columna == 11 ) && ( fila >= 1 && fila <= 9 ) ) || ( ( columna >= 2 && columna <= 5 ) && ( fila - columna == 8 || fila + columna == 15 ) ) ) || ( ( columna >= 7 && columna <= 10 ) && ( fila - columna == 3 || fila + columna == 20 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'x':
			if ( fila == columna || fila == 11 - columna + 1 )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'y':
			if ( ( fila == columna && ( fila >= 1 && fila <= 6 ) ) || fila == 11 - columna + 1 )
				espacio = imprimirCaracter( letraMinuscula );
			break;

		case 'z':
			if ( ( ( fila == 1 || fila == 11 ) && ( columna >= 1 && columna <= 11 ) ) || ( ( fila >= 2 && fila <= 10 ) && ( fila == 11 - columna + 1 ) ) )
				espacio = imprimirCaracter( letraMinuscula );
			break;
	}

	if ( espacio == 0 ) {
		printf( " " );
	}
	else
		espacio = 0;
}

void iterarFilasColumnas ( unsigned char caracter )
{
	unsigned short iterarFila = 0, iterarColumna = 0, espacio = 0;

	printf( "\n" );

	for ( iterarFila = 1; iterarFila <= 11; iterarFila++ ) {
		for ( iterarColumna = 1; iterarColumna <= 11; iterarColumna++ )
			if ( caracter >= 'A' && caracter <= 'Z' )
				dibujarLetraMayuscula( caracter, iterarFila, iterarColumna );
			else if ( caracter >= 'a' && caracter <= 'z' )
				dibujarLetraMinuscula( caracter, iterarFila, iterarColumna );
				

		printf( "\n" );
	}
}

int main( void )
{
	unsigned char letraIngresada = 0;

	printf( "Ingrese una letra: " );
	letraIngresada = getchar();

	if ( ( letraIngresada < 'A' || letraIngresada > 'Z' ) && ( letraIngresada < 'a' || letraIngresada > 'z' ) )
		do {
			letraIngresada = getchar();
			printf( "Entrada Inv%clida, vuelva a ingresar una letra: ", 160 );
			letraIngresada = getchar();
		} while ( ( letraIngresada < 'A' || letraIngresada > 'Z' ) && ( letraIngresada < 'a' || letraIngresada > 'z' ) );

	iterarFilasColumnas( letraIngresada );
}
