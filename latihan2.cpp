#include <iostream>
#define PHI 3.14 

using namespace std;
int main () {
	float jari_jari, luas;
	jari_jari = 25;
	
	luas = 0.5 * PHI * jari_jari * jari_jari;
	cout << "data lingkaran"<<endl;
	cout <<"jari_jari = "<<jari_jari<<endl;
	cout<<"luas = "<< luas <<endl;

	cin.get();
	return 0;
}