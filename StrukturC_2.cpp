#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main() {
	mahasiswa mhs;
	cout << "nomor Mahasiswa : ";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa : ";
	cin >> mhs.nama;

	cout << "alamat mahasiswa : ";
	cout << "\t nama Desa : ";
	cin >> mhs.alamat.desa;
	cout << "\t Nama kota : ";
	cin >> mhs.alamat.kota;

	cout << "Umur mahasiswa : ";
	cin >> mhs.umur;

}