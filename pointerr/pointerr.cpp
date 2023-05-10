#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNIm();  //deklarasi method

};


void mahasiswa::showNIm() {  //implementasi method diluar class
	cout << "no induk = " << nim << endl;
 }

int main()
{
	mahasiswa mhs{ 1 };   //object mhs
	 
}