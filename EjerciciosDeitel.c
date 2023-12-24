/* Una empresa de ventas por correo vende cinco productos diferentes cuyos precios de lista mostramos en la siguien-
te tabla:

Número de producto		Precio de lista
1						$2.98
2						$4.50
3						$9.98
4						$4.49
5						$6.87

Escriba un programa que lea una serie de pares de números de la siguiente manera:
a) Número de producto.
b) Cantidad vendida durante el día.
Su programa debe utilizar una instrucción switch para ayudar a determinar el precio de lista de cada producto.
Su programa debe calcular y desplegar el valor total de venta de todos los productos vendidos la semana pasada. */

#include <stdio.h>

int main(void)
{
	unsigned char numeroDeProducto = 0, cantidad = 0, siNo = 0, cantidadDeLos7Dias = 0;
	unsigned int dia = 0;
	float totalVendidoProducto1 = 0, totalVendidoProducto2 = 0, totalVendidoProducto3 = 0, totalVendidoProducto4 = 0, totalVendidoProducto5 = 0;

	for ( dia = 1; dia <= 7; dia++ ) {
		if ( cantidadDeLos7Dias == 0 )
			printf( "D%ca %d\n", 161, dia );

		printf( "Ingrese el n%cmero de producto\n", 163 );
		printf( "N%cmero de producto\tPrecio de lista\n1\t\t\t$2.98\n2\t\t\t$4.50\n3\t\t\t$9.98\n4\t\t\t$4.49\n5\t\t\t$6.87\n", 163 );
		scanf( "%d", &numeroDeProducto );
		while ( numeroDeProducto == 0 || numeroDeProducto > 5 ) {
			printf( "Opci%con inv%clida, vuela a ingresarla\n" );
			printf( "Ingrese el n%cmero de producto: ", 163 );
			scanf( "%d", &numeroDeProducto );
		}

		switch ( numeroDeProducto ) {
			case 1:
				printf( "Ingrese la cantidad vendida durante el d%ca de este producto: ", 161 );
				scanf( "%d", &cantidad );
				totalVendidoProducto1 += ( float ) cantidad * 2.98;
				printf( "El total de dinero ganado por las unidades de este producto en el d%ca %d es de $.2f%f\n\n", 161, dia, cantidad * 2.98 );
				break;
			case 2:
				printf( "Ingrese la cantidad vendida durante el d%ca de este producto: ", 161 );
				scanf( "%d", &cantidad );
				totalVendidoProducto2 += ( float ) cantidad * 4.50;
				printf( "El total de dinero ganado por las unidades de este producto en el d%ca %d es de $.2f%f\n\n", 161, dia, cantidad * 4.50 );
				break;
			case 3:
				printf( "Ingrese la cantidad vendida durante el d%ca de este producto: ", 161 );
				scanf( "%d", &cantidad );
				totalVendidoProducto3 += ( float ) cantidad * 9.98;
				printf( "El total de dinero ganado por las unidades de este producto en el d%ca %d es de $.2f%f\n\n", 161, dia, cantidad * 9.98 );
				break;
			case 4:
				printf( "Ingrese la cantidad vendida durante el d%ca de este producto: ", 161 );
				scanf( "%d", &cantidad );
				totalVendidoProducto4 += ( float ) cantidad * 4.49;
				printf( "El total de dinero ganado por las unidades de este producto en el d%ca %d es de $.2f%f\n\n", 161, dia, cantidad * 4.49 );
				break;
			case 5:
				printf( "Ingrese la cantidad vendida durante el d%ca de este producto: ", 161 );
				scanf( "%d", &cantidad );
				totalVendidoProducto5 += ( float ) cantidad * 6.87;
				printf( "El total de dinero ganado por las unidades de este producto en el d%ca %d es de $.2f%f\n\n", 161, dia, cantidad * 6.87 );
				break;
		}

		printf( "Desea ingresar otro producto por el d%ca de hoy?\n1. S%c\n2. No\n", 161, 161 );
		scanf( "%d", &siNo );
		while ( siNo != 1 && siNo != 2 ) {
			printf( "Opci%cn iv%clida, vuelva a digitarla\n", 162, 160 );
			printf( "Desea ingresar otro producto por el d%ca de hoy?\n1. S%c\n2. No\n", 161, 161 );
			scanf( "%d", &siNo );
		}

		if ( siNo == 1 ) {
			dia--;
			cantidadDeLos7Dias = 1;
		}
		else if ( siNo == 2 )
			cantidadDeLos7Dias = 0;

		printf( "\n" );
	}

	printf( "El dinero total ganado por cada producto esta semana se resume a continuaci%cn\n", 162 );
	printf( "Producto 1: $%.2f\n", totalVendidoProducto1 );
	printf( "Producto 2: $%.2f\n", totalVendidoProducto2 );
	printf( "Producto 3: $%.2f\n", totalVendidoProducto3 );
	printf( "Producto 4: $%.2f\n", totalVendidoProducto4 );
	printf( "Producto 5: $%.2f\n", totalVendidoProducto5 );
	printf( "El total ganado en toda la semana fue de $%.2f\n", totalVendidoProducto1 + totalVendidoProducto2 + totalVendidoProducto3 + totalVendidoProducto4 + totalVendidoProducto5 );
}
