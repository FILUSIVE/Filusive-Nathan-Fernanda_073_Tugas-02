/* Program Satu */
/* Menghitung sisi miring dan keliling Segitiga Siku-Siku */

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main (void)
{ 
   std::cout << "Filusive Nathan Fernanda \n";
	std::cout << "Menghitung Sisi Miring dan Keliling Segitiga Siku-siku";
	std::cout << "\n";
	
	float a, t, c, k;
	cout <<"Input alas segitiga siku-siku=";
	cin >> a;
	cout <<"Input tinggi segitiga siku-siku=";
	cin >> t;
	c= sqrt((a*a)+(t*t));
	k=a+t+c;
	cout <<"\nSisi miring Segitiga Siku-Siku="<<c<<endl;
	cout <<"Keliling Segitiga Siku-Siku="<<k<<endl;
	
	getch ();
	return 0;
}
