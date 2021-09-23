/* Program Tiga */
/* Menghitung cicilan, total cicilan, dan keuntungan dealer */

#include <iostream>
#include <conio.h>

using namespace std;

int main (void)
{
	std::cout << "Filusive Nathan Fernanda \n";
	std::cout << "Menghitung Cicilan, total cicilan, dan keuntungan dealer";
	std::cout << "\n";

	int harga_pokok, harga_motor, bunga, cicilan, total, kredit, untung;
	cout <<"Input harga motor=";
	cin>>harga_motor;
	cout <<"Input lama kredit=";
	cin>>kredit;
	harga_pokok=harga_motor/kredit;
	bunga=harga_pokok*0.1;
	cicilan=harga_pokok+bunga;
	total=cicilan*kredit;
	untung=total-harga_motor;
	
	cout <<"\nCicilan="<<cicilan<<endl;
	cout <<"Total harga cicilan="<<total<<endl;
	cout <<"Keuntungan dealer="<<untung<<endl;
	getch();
	return 0;
}
