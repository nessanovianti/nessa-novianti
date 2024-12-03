#include <iostream>
using namespace std;

int luas = 0;
int keliling = 0;
int panjang = 0;
int lebar = 0;
int alas = 0;
int tinggi = 0;
double jari = 3.14;


void persegi(int sisi) {
	int luas = sisi * sisi;
	int keliling = 4 * sisi;
	cout << "Persegi \n";
	cout << "luas persegi: " << luas << "\n";
	cout << "Keliling persegi: " << keliling << "\n\n";
}

void persegipanjang(double panjang, double lebar) {
	double luas = panjang * lebar;
	double keliling = 2 * (panjang + lebar);
	cout << "Persegi Panjang \n";
	cout << "luas persegi panjang: " << luas << "\n";
	cout << "keliling persegi panjang: " << keliling << "\n\n";

}

void segitigasikusiku(double alas, double tinggi) {
	double luas = 0.5 * alas * tinggi;
	double hipotenusa = sqrt(pow(alas, 2) + pow(tinggi, 2));
	double keliling = alas + tinggi + hipotenusa;
	cout << "Segitiga Siku-Siku";
	cout << "\nLuas Segitiga Siku-Siku: " << luas << endl;
	cout << "Keliling Segitiga Siku-Siku: " << keliling << "\n\n";
}

void lingkaran(double JariJari) {
	double	PI = 3.14;
	double luas = PI * JariJari * JariJari;
	double keliling = 2 * PI * JariJari;
	cout << "Lingkaran \n";
	cout << "Luas: " << luas << "\n";
	cout << "Keliling: " << keliling << "\n";
}

void main() {
	persegi(6);
	persegipanjang(5, 5);
	segitigasikusiku(4, 5);
	lingkaran(10);
}