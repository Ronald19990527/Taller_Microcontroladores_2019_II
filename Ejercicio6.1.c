#include <stdio.h>
#include <stdlib.h>

void dibujarLetraMayuscula( unsigned char caracter );

void dibujarLetraMinuscula( unsigned char caracter );

void dibujarLetraMayuscula( unsigned char caracter )
{
	unsigned short iterarFilas = 0;
	const char* letras[ 286 ] = {
		"     A     ", "BBBBBBBBB  ", "  CCCCCCCCC", "DDDDDDDDD  ", "EEEEEEEEEEE", "FFFFFFFFFFF", "  GGGGGGGGG", "H         H", "IIIIIIIIIII", "JJJJJJJJJJJ", "K         K", "L          ", "M         M", "N         N", "  OOOOOOO  ", "PPPPPPPPP  ", "  QQQQQQQ  ", "RRRRRRRRR  ", "  SSSSSSSSS", "TTTTTTTTTTT", "U         U", "V         V", "W    W    W", "X         X", "Y         Y", "ZZZZZZZZZZZ",
		"    A A    ", "B        B ", " C         ", "D        D ", "E          ", "F          ", " G         ", "H         H", "     I     ", "     J     ", "K        K ", "L          ", "MM       MM", "NN        N", " O       O ", "P        P ", " Q       Q ", "R        R ", " S         ", "     T     ", "U         U", "V         V", "W    W    W", " X       X ", " Y       Y ", "         Z ",
		"   A   A   ", "B         B", "C          ", "D         D", "E          ", "F          ", "G          ", "H         H", "     I     ", "     J     ", "K       K  ", "L          ", "M M     M M", "N N       N", "O         O", "P         P", "Q         Q", "R         R", "S          ", "     T     ", "U         U", "V         V", "W    W    W", "  X     X  ", "  Y     Y  ", "        Z  ",
		"  A     A  ", "B         B", "C          ", "D         D", "E          ", "F          ", "G          ", "H         H", "     I     ", "     J     ", "K      K   ", "L          ", "M  M   M  M", "N  N      N", "O         O", "P         P", "Q         Q", "R         R", "S          ", "     T     ", "U         U", "V         V", "W    W    W", "   X   X   ", "   Y   Y   ", "       Z   ",
		" A       A ", "B        B ", "C          ", "D         D", "E          ", "F          ", "G          ", "H         H", "     I     ", "     J     ", "K     K    ", "L          ", "M   M M   M", "N   N     N", "O         O", "P        P ", "Q         Q", "R        R ", " S         ", "     T     ", "U         U", "V         V", "W    W    W", "    X X    ", "    Y Y    ", "      Z    ",
		"AAAAAAAAAAA", "BBBBBBBBB  ", "C          ", "D         D", "EEEEEEEEEEE", "FFFFFFFFFFF", "G    GGGG  ", "HHHHHHHHHHH", "     I     ", "     J     ", "KKKKKK     ", "L          ", "M    M    M", "N    N    N", "O         O", "PPPPPPPPP  ", "Q         Q", "RRRRRRRRR  ", "  SSSSSSS  ", "     T     ", "U         U", "V         V", "W    W    W", "     X     ", "     Y     ", "     Z     ",
		"A         A", "B        B ", "C          ", "D         D", "E          ", "F          ", "G        G ", "H         H", "     I     ", "     J     ", "K     K    ", "L          ", "M         M", "N     N   N", "O         O", "P          ", "Q         Q", "R        R ", "         S ", "     T     ", "U         U", "V         V", "W    W    W", "    X X    ", "     Y     ", "    Z      ",
		"A         A", "B         B", "C          ", "D         D", "E          ", "F          ", "G         G", "H         H", "     I     ", "     J     ", "K      K   ", "L          ", "M         M", "N      N  N", "O         O", "P          ", "Q         Q", "R         R", "          S", "     T     ", "U         U", " V       V ", "W    W    W", "   X   X   ", "     Y     ", "   Z       ",
		"A         A", "B         B", "C          ", "D         D", "E          ", "F          ", "G         G", "H         H", "     I     ", "     J     ", "K       K  ", "L          ", "M         M", "N       N N", "O         O", "P          ", "Q       Q Q", "R         R", "          S", "     T     ", "U         U", "  V     V  ", "W    W    W", "  X     X  ", "     Y     ", "  Z        ",
		"A         A", "B        B ", " C         ", "D        D ", "E          ", "F          ", " G       G ", "H         H", "     I     ", "J   J      ", "K        K ", "L          ", "M         M", "N        NN", " O       O ", "P          ", " Q       Q ", "R         R", "         S ", "     T     ", " U       U ", "   V   V   ", " W   W   W ", " X       X ", "     Y     ", " Z         ",
		"A         A", "BBBBBBBBB  ", "  CCCCCCCCC", "DDDDDDDDD  ",	"EEEEEEEEEEE", "F          ", "  GGGGGGG  ", "H         H", "IIIIIIIIIII", " JJJ       ", "K         K", "LLLLLLLLLLL", "M         M", "N         N", "  OOOOOOO  ", "P          ", "  QQQQQQQ Q", "R         R", "SSSSSSSSS  ", "     T     ", "  UUUUUUU  ", "    VVV    ", "  WWW WWW  ", "X         X", "     Y     ", "ZZZZZZZZZZZ"
	};

	printf( "\n" );

	for ( iterarFilas = 0; iterarFilas < 11; iterarFilas++ )
		printf( "%s\n", letras[ ( unsigned short ) caracter - 65 + iterarFilas * 26 ] );
}

void dibujarLetraMinuscula( unsigned char caracter )
{
	unsigned short iterarFilas = 0;
	const char* letras[ 286 ] = {
		"aaaaaaaaaa ", "b          ", "  ccccccccc", "          d", "  eeeeeee  ", "  fffffff  ",
		"          a", "b          ", " c         ", "          d", " e       e ", " f       f ",
		"          a", "b          ", "c          ", "          d", "e         e", "f         f",
		"          a", "b          ", "c          ", "          d", "e         e", "f          ",
		"          a", "b          ", "c          ", "          d", "e         e", "f          ",
		" aaaaaaaaaa", "bbbbbbbbbb ", "c          ", " dddddddddd", "eeeeeeeeeee", "fffffffffff",
		"a         a", "b         b", "c          ", "d         d", "e          ", "f          ",
		"a         a", "b         b", "c          ", "d         d", "e          ", "f          ",
		"a         a", "b         b", "c          ", "d         d", "e          ", "f          ",
		"a         a", "b         b", " c         ", "d         d", " e        e", "f          ",
		" aaaaaaaaa ", "bbbbbbbbbb ", "  ccccccccc", " ddddddddd ", "  eeeeeeee ", "f          "
	};

	printf( "\n" );

	for ( iterarFilas = 0; iterarFilas < 11; iterarFilas++ )
		printf( "%s\n", letras[ ( unsigned short ) caracter - 97 + iterarFilas * 6 ] );
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

	if ( letraIngresada >= 'A' && letraIngresada <= 'Z' )
		dibujarLetraMayuscula( letraIngresada );
	else if ( letraIngresada >= 'a' && letraIngresada <= 'z' )
		dibujarLetraMinuscula( letraIngresada );
}
