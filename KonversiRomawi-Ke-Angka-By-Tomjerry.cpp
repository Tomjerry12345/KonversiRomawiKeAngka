#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	char romawi[20];
	int angka;
	int b = 0;
	
	cout << "Input Angka Romawi : ";
	gets(romawi);
	
	for (int a = 0; a <= strlen(romawi); a++)
	{
		if ((romawi[a] == 'C') && (romawi[a+1] == 'M'))
		{
			angka += 900;
			a+=2;
		}
		
		if ((romawi[a] == 'C') && (romawi[a + 1] == 'D'))
		{
			angka += 400;
			a += 2;
		}
		
		if ((romawi[a] == 'X') && (romawi[a+1] == 'C'))
		{
			angka += 90;
			a += 2;
		}
		
		if ((romawi[a] == 'X') && (romawi[a+1] == 'L'))
		{
			angka += 40;
			a += 2;
		} 
		
		if ((romawi[a] == 'I') && (romawi[a+1] == 'X'))
		{
			angka += 9;
			a += 2;
		} 
//		
		if ((romawi[a] == 'I') && (romawi[a+1] == 'V'))
		{
			angka += 4;
			a += 2;
		} 
		
		
//		
		if (romawi[a] == 'M')
		{
			angka += 1000;	
		}
//		
		if (romawi[a] == 'C')
		{
			angka += 100;
		}
//		
		if (romawi[a] == 'D')
		{
			angka += 500;
		}
//		
		if (romawi[a] == 'L')
		{
			angka += 50;
		}
//		
		if (romawi[a] == 'X')
		{
			angka += 10;
		}
//		
		if (romawi[a] == 'V')
		{
			angka += 5;
		}
//		
		if (romawi[a] == 'I')
		{
			angka += 1;
		}
		
		
	}
	
	cout << "Konversi bilangan romawi ke angka : " << angka << endl;
	
	
}
