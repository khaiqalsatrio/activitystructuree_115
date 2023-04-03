#include <iostream>
using namespace std; 

struct alamatdetail
{
	char desa[20];
	char kota[20];
};

struct mahasiswa
{
	char NIM[12];
	char nama[25];
	alamatdetail alamat;
	int umur;
};


int main() {
	mahasiswa mhs[3];

	for (int i = 0; 1 < 3; i++) {
		cout << "masukan nim : ";
		cin.getline(mhs[i].NIM, 12);
		cout << "masukan nama :";
		cin.getline(mhs[i].nama, 25);
		cout << "alamat :";
		cout << "\n\tmasukan desa :";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "\tmasukan kota :";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "masukan umur :";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "\n\nNIM = " << mhs[i].NIM;
		cout << "\nNama = " << mhs[i].nama;
		cout << "\nDesa = " << mhs[i].alamat.desa;
		cout << "\nkota = " << mhs[i].alamat.kota;
		cout << "\numur = " << mhs[i].umur;
	}
}