/* Program 2 */
/* Menghitung nilai rata-rata */

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main (void)
{
	float p,t,f,r;
	cout <<"Masukkan Nilai Praktikum=";
	cin>>p;
	cout <<"Masukkan Nilai Teori=";
	cin>>t;
	cout <<"Masukkan Nilai Final Project=";
	cin>>f;
	p=p*40/100;
	t=t*40/100;
	f=f*20/100;
	r=p+t+f;
	
	cout <<"\nNilai rata-rata Praktikum="<<p<<endl;
	cout <<"Nilai rata-rata Teori="<<t<<endl;
	cout <<"Nilai rata-rata Final Project="<<f<<endl;
	cout <<"\nTotal Rata-Rata Nilai="<<r<<endl;
	getch ();
	return 0;
}
