
#include <iostream>
using namespace std;

struct alamatdetail 
{
	string desa;
	string kota;
};

struct mahasiswa
{
	string NIM;
	string Nama;
	alamatdetail alamat;
	int umur;
};


int main() {
	mahasiswa mhs;

	cout << "masukan NIM :";
	cin >> mhs.NIM;
	cout << "masukan Nama :";
	cin >> mhs.Nama;
	cout << "alamat :";
	cout << "\n\tmasukan kota :";
	cin >> mhs.alamat.desa;
	cout << "\tmasukan kota :";
	cin >> mhs.umur;
	cout << "masukan umur : "
		cin >> mhs.umur;

	cout << "\n\nNim = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\nDesa = " << mhs.alamat.desa;
	cout << "\nkota = " << mhs.alamat.kota;
	cout << "\numur = " << mhs.umur;
}