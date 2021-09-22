/* Program Satu */
/* Menghitung sisi miring dan keliling Segitiga Siku-Siku */

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main (void)
{
	float a, t, c, k;
	cout <<"Masukkan alas segitiga siku-siku=";
	cin >> a;
	cout <<"Masukkan tinggi segitiga siku-siku=";
	cin >> t;
	c= sqrt((a*a)+(t*t));
	k=a+t+c;
	cout <<"\nSisi miring Segitiga Siku-Siku="<<c<<endl;
	cout <<"Keliling Segitiga Siku-Siku="<<k<<endl;
	
	getch ();
	return 0;
	

}


/* Program Dua */
/* Menghitung nilai rata-rata kuliah pemrograman terstruktur */


