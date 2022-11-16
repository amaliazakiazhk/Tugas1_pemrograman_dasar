#include <iostream>
using namespace std;

int main(){
	float phi = 3.14, volume;
	int r;
	
	cout << "Masukan nilai jari-jari: ";
	cin >> r;
	
	volume=(4.0/3)*phi*r*r*r;
	
	cout << "Isi volume bola adalah: " << volume;
	
}