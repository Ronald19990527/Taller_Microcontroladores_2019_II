/* 1) Dado dos números en formato string de tamaño variable, ejemplo:

unsigned char dato1[] = "125";
unsigned char dato2[] = "1236";

a) Realizar un programa que muestre la suma de los dos números. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned char dato1[] = "125";
	unsigned char dato2[] = "1236";
	unsigned char suma[] = "\0\0\0\0\0\0\0\0\0\0";
	unsigned char conversion_suma_int_a_string = 0, cambio = 0;
	unsigned int suma_dato1_dato2 = 0, tamanio_dato1 = 0, tamanio_dato2 = 0, iterador_de_tamanios_1_2_suma = 0, multiplicador1 = 1, multiplicador2 = 1, multiplicador_suma = 10, formato_int_dato1 = 0, formato_int_dato2 = 0;

	while ( cambio != 2 )
		if ( dato1[ iterador_de_tamanios_1_2_suma ] != '\0' && cambio == 0 ) {
			multiplicador1 *= 10;

			iterador_de_tamanios_1_2_suma++;
		}
		else if ( dato2[ iterador_de_tamanios_1_2_suma ] != '\0' && cambio == 1 ) {
			multiplicador2 *= 10;

			iterador_de_tamanios_1_2_suma++;
		}
		else if ( dato1[ iterador_de_tamanios_1_2_suma ] == '\0' && cambio == 0 ) {
			cambio = 1;

			iterador_de_tamanios_1_2_suma = 0;
		}
		else if ( dato2[ iterador_de_tamanios_1_2_suma ] == '\0' && cambio == 1 )
			cambio = 2;

	multiplicador1 /= 10;

	multiplicador2 /= 10;

	iterador_de_tamanios_1_2_suma = 0;

	while ( dato1[ iterador_de_tamanios_1_2_suma ] != '\0' || dato2[ iterador_de_tamanios_1_2_suma ] != '\0' ) {
		if ( dato1[ iterador_de_tamanios_1_2_suma ] != '\0' ) {
			formato_int_dato1 += ( dato1[ iterador_de_tamanios_1_2_suma ] - 48 ) * multiplicador1;

			multiplicador1 /= 10;
		}

		if ( dato2[ iterador_de_tamanios_1_2_suma ] != '\0' ) {
			formato_int_dato2 += ( dato2[ iterador_de_tamanios_1_2_suma ] - 48 ) * multiplicador2;

			multiplicador2 /= 10;
		}

		iterador_de_tamanios_1_2_suma++;
	}

	suma_dato1_dato2 = formato_int_dato1 + formato_int_dato2;

	iterador_de_tamanios_1_2_suma = 0;

	while ( multiplicador_suma != 1 )
		if ( ( ( formato_int_dato1 + formato_int_dato2 ) / multiplicador_suma != 0 ) && conversion_suma_int_a_string == 0 )
			multiplicador_suma *= 10;
		else if ( multiplicador_suma != 1 ) {
			conversion_suma_int_a_string = 1;

			multiplicador_suma /= 10;

			suma[ iterador_de_tamanios_1_2_suma ] = suma_dato1_dato2 / multiplicador_suma + 48;

			suma_dato1_dato2 %= multiplicador_suma;

			iterador_de_tamanios_1_2_suma++;
		}

	printf( "La suma de los n%cmeros %s y %s es igual a %s\n", 163, &dato1[0], &dato2[0], &suma[0] );
}
