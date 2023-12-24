/* 3) En una memoria ROM, los datos se almacenan en formato de 8 bits, por tanto si se desea guardar un
número de 32 bits, éste debe ser fragmentado en 4 espacios de memoria.

Escriba un programa que almacene en un vector tipo char de 4 posiciones (simulando la ROM), un dato
de 32 bits, luego lo lea de este vector y lo reconstruya nuevamente para ser mostrado en pantalla. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int numero32Bits = 0, corrimientoConversion = 1, corrimientoConversionFragmentacion = 1, multiplicadorDecimal = 1, sumaDecimal = 0;
	unsigned char datoFragmentado[ 4 ] = {0, 0, 0, 0}, corrimientoExtraerDato = 1, contadorDeBits = 0, auxiliarDatoFragmentado = 0, iteradorDatoFragmentado = 3, iteradorDelNumeroIngresado = 1, multiplicadorDePotenciasDe2 = 1, sumaDePotenciasDe2 = 0;

	printf( "Ingrese el n%cmero que desea guardar en memoria: ", 163 );
	scanf( "%d", &numero32Bits );
	printf( "\n" );

	printf( "El %d en formato de 32 bits es ", numero32Bits );

	corrimientoConversion = corrimientoConversion << 31;

	while ( contadorDeBits < 32 ) {
		if ( corrimientoConversion >= 1 )
			if ( numero32Bits & corrimientoConversion )
				printf( "1" );
			else
				printf( "0" );

		contadorDeBits++;

		if ( contadorDeBits < 32 )
			corrimientoConversion = corrimientoConversion >> 1;
	}

	printf( "\n\n" );

	contadorDeBits = 0;

	while ( iteradorDelNumeroIngresado <= 33 ) {
		if ( ( iteradorDelNumeroIngresado == 9 || iteradorDelNumeroIngresado == 17 ) || ( iteradorDelNumeroIngresado == 25 || iteradorDelNumeroIngresado == 33 ) ) {
			datoFragmentado[ iteradorDatoFragmentado ] = sumaDePotenciasDe2;

			multiplicadorDePotenciasDe2 = 1;

			sumaDePotenciasDe2 = 0;

			iteradorDatoFragmentado--;
		}

		if ( ( numero32Bits & corrimientoConversionFragmentacion ) && iteradorDelNumeroIngresado != 33 )
			sumaDePotenciasDe2 += multiplicadorDePotenciasDe2;

		multiplicadorDePotenciasDe2 *= 2;

		iteradorDelNumeroIngresado++;

		if ( iteradorDelNumeroIngresado <= 32 )
			corrimientoConversionFragmentacion = corrimientoConversionFragmentacion << 1;
	}

	multiplicadorDePotenciasDe2 = 2;

	sumaDePotenciasDe2 = 0;

	printf( "Este dato fue fragmentado y guardado en 4 espacios de memoria de 8 bits como se muestra a continuaci%cn:\n\n", 162 );

	for ( sumaDePotenciasDe2 = 0; sumaDePotenciasDe2 < 4; sumaDePotenciasDe2++ ) {
		printf( "[ %d ]-->%d-->", sumaDePotenciasDe2, datoFragmentado[ sumaDePotenciasDe2 ] );

		auxiliarDatoFragmentado = datoFragmentado[ sumaDePotenciasDe2 ];

		while ( contadorDeBits < 8 ) {
			if ( auxiliarDatoFragmentado >= 1 ) {
				sumaDecimal += auxiliarDatoFragmentado % multiplicadorDePotenciasDe2 * multiplicadorDecimal;

				auxiliarDatoFragmentado /= multiplicadorDePotenciasDe2;

				multiplicadorDecimal *= 10;
			}
			else
				printf( "0" );

			contadorDeBits++;
		}

		sumaDecimal += auxiliarDatoFragmentado * multiplicadorDecimal;

		if ( datoFragmentado[ sumaDePotenciasDe2 ] >= 1 )
			printf( "%d\t", sumaDecimal );
		else
			printf( "\t" );

		sumaDecimal = 0;

		multiplicadorDecimal = 1;

		contadorDeBits = 0;
	}

	corrimientoExtraerDato = corrimientoExtraerDato << 7;

	multiplicadorDecimal = multiplicadorDecimal << 31;

	printf( "\n\nEl dato extra%cdo de la memoria es el siguiente:\n\n", 161 );

	for ( sumaDePotenciasDe2 = 0; sumaDePotenciasDe2 < 4; sumaDePotenciasDe2++ ) {
		while ( corrimientoExtraerDato >= 1 ) {
			if ( datoFragmentado[ sumaDePotenciasDe2 ] & corrimientoExtraerDato ) {
				printf( "1" );

				sumaDecimal += multiplicadorDecimal;
			}
			else
				printf( "0" );

			multiplicadorDecimal /= 2;

			corrimientoExtraerDato = corrimientoExtraerDato >> 1;
		}

		corrimientoExtraerDato = 1;

		corrimientoExtraerDato = corrimientoExtraerDato << 7;
	}

	printf( "-->%d\n", sumaDecimal );
}
