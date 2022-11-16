#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(){
	int alas, tinggi, a;
	
	cout << "Masukan nilai alas: ";
	cin >> alas;
	cout << "Masukan nilai tinggi: ";
	cin >> tinggi;
	
	a= sqrt((pow(alas,2))+pow(tinggi,2));
	
	cout << "Nilai sisi miring segitiga siku-siku: " << a;
}