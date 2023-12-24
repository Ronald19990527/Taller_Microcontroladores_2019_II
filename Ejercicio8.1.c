/* 8) RETO 3 
Realice un programa que reciba una cantidad numérica de hasta 4 cifras y exprese esa misma cantidad
en letras:

ejemplo:

ingrese una cantidad de 4 cifras: 1252

salida del programa: Mil doscientos cincuenta y dos.
*/

#include <stdio.h>
#include <stdlib.h>

unsigned char escribirCantidad(unsigned int cifra, unsigned char cantidadDeCifras, unsigned char cantidadDeCifrasQueDisminuye, unsigned int residuo);

unsigned char escribirCantidad(unsigned int cifra, unsigned char cantidadDeCifras, unsigned char cantidadDeCifrasQueDisminuye, unsigned int residuo)
{
	unsigned char auxiliarIterarCifras = 0, finalizarPrograma = 0;
	char *unidadesMayuscula[] = {"Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve"};
	char *unidadesMinuscula[] = {"uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
	char *decenasMayuscula[] = {"Diez", "Veinte", "Treinta", "Cuarenta", "Cincuenta", "Sesenta", "Setenta", "Ochenta", "Noventa"};
	char *decenasMinuscula[] = {"diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
	char *centenasMayuscula[] = {"Cien", "Doscientos", "Trescientos", "Cuatrocientos", "Quinientos", "Seiscientos", "Setecientos", "Ochocientos", "Novecientos"};
	char *centenasMinuscula[] = {"cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
	char *numerosEspecialesMayuscula[] = {"Once", "Doce", "Trece", "Catorce", "Quince", "Dieci", "Veinti"};
	char *numerosEspecialesMinuscula[] = {"once", "doce", "trece", "catorce", "quince", "dieci", "veinti"};

	if ( cantidadDeCifras == cantidadDeCifrasQueDisminuye ) {
		if ( cantidadDeCifrasQueDisminuye == 4 && cifra == 1 )
			printf( "Mil " );
		else if ( cantidadDeCifrasQueDisminuye == 4 && cifra > 1 )
			printf( "%s mil ", unidadesMayuscula[ cifra - 1 ] );
		else if ( ( cantidadDeCifrasQueDisminuye == 3 && cifra == 1 ) && residuo == 0 )
			printf( "%s", centenasMayuscula[ cifra - 1 ] );
		else if ( ( cantidadDeCifrasQueDisminuye == 3 && cifra == 1 ) && residuo != 0 )
			printf( "Ciento " );
		else if ( cantidadDeCifrasQueDisminuye == 3 && cifra > 1 )
			printf( "%s ", centenasMayuscula[ cifra - 1 ] );
		else if ( ( cantidadDeCifrasQueDisminuye == 2 && cifra == 1 ) && residuo == 0 )
			printf( "%s", decenasMayuscula[ cifra - 1 ] );
		else if ( ( cantidadDeCifrasQueDisminuye == 2 && cifra == 1 ) && residuo != 0 ) {
			if ( residuo >= 1 && residuo <= 5 ) {
				printf( "%s", numerosEspecialesMayuscula[ residuo - 1 ] );

				finalizarPrograma = 1;
			}
			else if ( residuo > 5 )
				printf( "%s", numerosEspecialesMayuscula[ 5 ] );
		}
		else if ( ( cantidadDeCifrasQueDisminuye == 2 && cifra == 2) && residuo == 0 )
			printf( "%s", decenasMayuscula[ cifra - 1 ] );
		else if ( ( cantidadDeCifrasQueDisminuye == 2 && cifra == 2) && residuo != 0 )
			printf( "%s", numerosEspecialesMayuscula[ 6 ] );
		else if ( ( cantidadDeCifrasQueDisminuye == 2 && cifra > 2 ) && residuo == 0 )
			printf( "%s", decenasMayuscula[ cifra - 1 ] );
		else if ( ( cantidadDeCifrasQueDisminuye == 2 && cifra > 2 ) && residuo != 0 )
			printf( "%s y ", decenasMayuscula[ cifra - 1 ] );
		else if ( cantidadDeCifrasQueDisminuye == 1 )
			printf( "%s", unidadesMayuscula[ cifra - 1 ] );
	}
	else if ( cantidadDeCifras > cantidadDeCifrasQueDisminuye ) {
		if ( ( cantidadDeCifrasQueDisminuye == 3 && cifra == 1 ) && residuo == 0 )
			printf( "%s", centenasMinuscula[ cifra - 1 ] );
		else if ( ( cantidadDeCifrasQueDisminuye == 3 && cifra == 1 ) && residuo != 0 )
			printf( "ciento " );
		else if ( cantidadDeCifrasQueDisminuye == 3 && cifra > 1 )
			printf( "%s ", centenasMinuscula[ cifra - 1 ] );
		else if ( ( cantidadDeCifrasQueDisminuye == 2 && cifra == 1 ) && residuo == 0 )
			printf( "%s", decenasMinuscula[ cifra - 1 ] );
		else if ( ( cantidadDeCifrasQueDisminuye == 2 && cifra == 1 ) && residuo != 0 ) {
			if ( residuo >= 1 && residuo <= 5 ) {
				printf( "%s", numerosEspecialesMinuscula[ residuo - 1 ] );

				finalizarPrograma = 1;
			}
			else if ( residuo > 5 )
				printf( "%s", numerosEspecialesMinuscula[ 5 ] );
		}
		else if ( ( cantidadDeCifrasQueDisminuye == 2 && cifra == 2) && residuo == 0 )
			printf( "%s", decenasMinuscula[ cifra - 1 ] );
		else if ( ( cantidadDeCifrasQueDisminuye == 2 && cifra == 2) && residuo != 0 )
			printf( "%s", numerosEspecialesMinuscula[ 6 ] );
		else if ( ( cantidadDeCifrasQueDisminuye == 2 && cifra > 2 ) && residuo == 0 )
			printf( "%s", decenasMinuscula[ cifra - 1 ] );
		else if ( ( cantidadDeCifrasQueDisminuye == 2 && cifra > 2 ) && residuo != 0 )
			printf( "%s y ", decenasMinuscula[ cifra - 1 ] );
		else if ( cantidadDeCifrasQueDisminuye == 1 )
			printf( "%s", unidadesMinuscula[ cifra - 1 ] );
	}

	return ( finalizarPrograma );
}

int main(void)
{
	unsigned int cantidad = 0, multiplicadorContarCifras = 1, divisorFraccionarCantidad = 0;
	unsigned char numeroDeCifras = 0, numeroDeCifrasQueDisminuye = 0, terminarPrograma = 0;

	printf( "Ingrese una cantidad (M%cximo 4 cifras, ingrese ( -1 ) para terminar): ", 160 );
	scanf( "%d", &cantidad );
	printf( "\n" );

	while ( ( cantidad > 9999 || cantidad < 1 ) && cantidad != -1 ) {
		printf( "La cantidad ingresada supera las 4 cifras, vuelva a ingresarla (M%cximo 4 cifras ingrese ( -1 ) para terminar): ", 160 );
		scanf( "%d", &cantidad );
		printf( "\n" );
	}

	if ( cantidad != -1 )
		while ( ( cantidad / multiplicadorContarCifras != 0 ) || cantidad != 0 )
			if ( cantidad / multiplicadorContarCifras != 0 ) {
				numeroDeCifras++;

				numeroDeCifrasQueDisminuye++;

				divisorFraccionarCantidad = multiplicadorContarCifras;

				multiplicadorContarCifras *= 10;
			}
			else {
				terminarPrograma = escribirCantidad(cantidad / divisorFraccionarCantidad, numeroDeCifras, numeroDeCifrasQueDisminuye, cantidad % divisorFraccionarCantidad);

				if ( terminarPrograma == 0 ) {
					cantidad %= divisorFraccionarCantidad;

					divisorFraccionarCantidad /= 10;

					numeroDeCifrasQueDisminuye--;
				}
				else
					cantidad = 0;
			}
	else
		printf( "Programa finalizado con %cxito", 130 );

	printf( "\n" );

	return 0;
}
