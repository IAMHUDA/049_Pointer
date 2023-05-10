#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim();  //deklarasi method

};
 

void mahasiswa::showNim() {  //implementasi method diluar class
	cout << "no induk = " << nim << endl;
 }

int main()
{
	mahasiswa mhs{ 1 };   //object mhs
	mhs.showNim();  //member acces operator

	mahasiswa& ref = mhs;  //pointer refrences refMhs
	ref.nim = 2;  //member access operator
	mhs.showNim(); //

	mahasiswa* pMhs = &mhs; //pointer references pMhs
	pMhs->nim = 3;  //arrow operator
	mhs.showNim();
	system("pause");
	return 0;

	 
}