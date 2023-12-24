/* incluir el encabezado estándar de entrada/salida */
#include <stdio.h>
#include <stdlib.h>

/* la función main inicia la ejecución del programa */
int main( void )
{

	srand( 1 );

    char datos[ 100 ] = { 0 }, numero_de_veces_repetidas[ 10 ] = { 0 }, numeros_repetidos[ 10 ] = { 0 };
    char i = 0, j = 0, contador_de_repeticiones = 0, auxiliar1 = 0, auxiliar2 = 0;
    
    for ( i = 0; i < 100; i++){
        datos[ i ] = rand() % 10;
    }

    i = 0;

    for ( i = 0; i < 10; i++ ){
        for ( j = 0; j < 100; j++ ){
            if ( datos[ j ] == i ){
                contador_de_repeticiones++;
            }
        }
        
        if ( contador_de_repeticiones > 0 ){
            numero_de_veces_repetidas[ i ] = contador_de_repeticiones;

            numeros_repetidos[ i ] = i;
        }
        
        contador_de_repeticiones = 0;
    }

    i = 0;

    j = 0;

    while ( numero_de_veces_repetidas[ i ] != 0 && i < 10 ){
        printf( "%d -> %d\n", numeros_repetidos[ i ], numero_de_veces_repetidas[ i ] );

        i++;
    }

    printf( "\n" );

    i = 0;

    for ( i = 0; i < 10; i++ ){
        for ( j = 0; j < 9; j++ ){
            if ( numero_de_veces_repetidas[ j ] < numero_de_veces_repetidas[ j + 1 ] ){
                auxiliar1 = numero_de_veces_repetidas[ j ];

                auxiliar2 = numeros_repetidos[ j ];

                numero_de_veces_repetidas[ j ] = numero_de_veces_repetidas[ j + 1 ];

                numeros_repetidos[ j ] = numeros_repetidos[ j + 1 ];

                numero_de_veces_repetidas[ j + 1 ] = auxiliar1;

                numeros_repetidos[ j + 1 ] = auxiliar2;
            }
        }
    }

    i = 0;

    while ( numero_de_veces_repetidas[ i ] != 0 && i < 10 ){
        printf( "[%d] ", numeros_repetidos[ i ] );

        for ( j = 0; j < numero_de_veces_repetidas[ i ]; j++ ){
            printf( "*" );
        }

        printf( "\n" );

        i++;
    }

    return 0; /* indica que el programa finalizó con éxito */
} /* fin de la función main*/
