#include <iostream>
using namespace std;

class siswa;

class orang {
private:
	string nama;
public:
	void setNama(string pNama);
	friend class siswa; 
};

class siswa {
private:
	int id;
public:
	void setId(int pId);
	void displayAll(orang& a);
};

void siswa::displayAll(orange& a) {
	cout << id << endl << a.nama;
}

void siswa::setId(int pId) {
	id = pId;
}

void orang::setNama(string pNama) {
	nama = pNama;
}

int main()
{
	orang o;
	o.setNama("joko kumat");
	siswa s;
	s.setId(1);
	s.displayAll(o);
	cout << endl;
	system("pause");
	return 0;
}