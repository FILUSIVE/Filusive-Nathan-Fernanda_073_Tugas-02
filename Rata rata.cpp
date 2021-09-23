/* Program 2 */
/* Menghitung nilai rata-rata */

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main (void)
{
		std::cout << "Filusive Nathan Fernanda \n";
	std::cout << "Menghitung nilai rata-rata";
	std::cout << "\n";
	
	float p,t,f,r;
	cout <<"Input nilai praktikum=";
	cin>>p;
	cout <<"Input Nilai Teori=";
	cin>>t;
	cout <<"Input Nilai Final Project=";
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
