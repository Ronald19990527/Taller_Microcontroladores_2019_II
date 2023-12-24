/* 2) Dato un número binario:
 	
char binary[] = "10111010100101";

realizar un programa que pueda imprimir su equivalente en decimal en formato string esto es:
(printf("%s", num)) Restricción: No se puede usar potencia. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char binary[] = "0111001110110101010110";
	unsigned char decimal[] = "\0\0\0\0\0\0\0\0\0\0";
	unsigned char conversionBinaryToString = 0;
	unsigned int multiplicador_de_conversion_y_potencias_de_2 = 1, suma_potencias_de_2 = 0, iteradorBinary = 0;

	while ( binary[iteradorBinary] != '\0' )
		iteradorBinary++;

	while ( iteradorBinary >= 1 ) {
		if ( binary[iteradorBinary - 1] == '1' )
			suma_potencias_de_2 += multiplicador_de_conversion_y_potencias_de_2;

		multiplicador_de_conversion_y_potencias_de_2 *= 2;

		iteradorBinary--;
	}

	iteradorBinary = 0;

	multiplicador_de_conversion_y_potencias_de_2 = 10;

	while ( multiplicador_de_conversion_y_potencias_de_2 != 1 )
		if ( ( suma_potencias_de_2 / multiplicador_de_conversion_y_potencias_de_2 != 0 ) && conversionBinaryToString == 0 )
			multiplicador_de_conversion_y_potencias_de_2 *= 10;
		else if ( multiplicador_de_conversion_y_potencias_de_2 != 1 ) {
			conversionBinaryToString = 1;

			multiplicador_de_conversion_y_potencias_de_2 /= 10;

			decimal[ iteradorBinary ] = suma_potencias_de_2 / multiplicador_de_conversion_y_potencias_de_2 + 48;

			suma_potencias_de_2 %= multiplicador_de_conversion_y_potencias_de_2;

			iteradorBinary++;
		}

	printf( "El n%cmero binario %s equivale a %s en decimal\n", 163, &binary[0], &decimal[0] );
}
