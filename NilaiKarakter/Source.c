/*	Copyright (C) 2018 by Rizky Khapidsyah 
	Compiler : Ms. Visual Studio 2017
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define L_NL "\n"
#define L_Strp "-"

int X;
char K1;

void CSH(char *CParam1, char *CParam2, int IParam1, int IParam2)
{
	for (X = 1; X <= IParam1; X++)
	{
		printf("%s", 
			CParam1);
	}
		for (X = 1; X <= IParam2; X++)
		{
			printf("%s", 
				CParam2);
		}
}

int main()
{	
	CSH(L_Strp, L_NL, 56, 1);
	
		printf("Masukkan 1 Karakter (Misal: A)                     = "); scanf_s("%c", &K1);
	
	CSH(L_Strp, L_NL, 56, 1);
	
		printf("Nilai Variabel adalah                              : %c%s", K1, L_NL);
		printf("Nilai variabel (Dalam Bentuk Angka ASCII) adalah   : %i%s", K1, L_NL);
	
	CSH(L_Strp, L_NL, 56, 1);
	
	_getch();
	return 0;
}
