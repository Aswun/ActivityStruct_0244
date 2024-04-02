#include<iostream>
using namespace std;
#include<string>

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
	mahasiswa mhs[3];
	for (int i = 0; i < 3; i++) {
		cout << "data ke-" << (i + 1) << ":" << endl;
		cout << "Nomor mahasiswa : ";
		getline(cin, mhs[i].nim);
		cout << "Nama Mahasiswa : ";
		getline(cin, mhs[i].nama)
    }
}    