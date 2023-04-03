#include <iostream>
using namespace std;

struct mahasiswa
{
	string NIM;
	string nama;

	string alamat;
	int umur;
};


int main() {
	mahasiswa mhs1, mhs2;

	mhs1.NIM = "20210140019";
	mhs1.nama = "Ardiyan Mulya";
	mhs1.alamat = "wonosobo";
	mhs1.umur = 20;

	cout << "Masukan NIM :";
	cin >> mhs2.NIM;
	cout << "masukan nama :";
	cin >> mhs2.nama;
	cout << "masukan alamat :";
	cin >> mhs2.alamat;
	cout << "masukan unsur : ";
	cin >> mhs2.umur;

	cout << "\nNIM = " << mhs1.NIM;
	cout << "\nNama = " << mhs1.nama;
	cout << "\nAlamat = " << mhs1.alamat;
	cout << "\nUnsur = " << mhs1.umur;

	cout << "\n\nNim = " << mhs2.NIM;
	cout << "\nNama = " << mhs2.nama;
	cout << "\nAlamat = " << mhs2.alamat;
	cout << "\nUmur = " << mhs2.umur;

}

