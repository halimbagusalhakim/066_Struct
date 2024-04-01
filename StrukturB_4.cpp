#include <iostream>

using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main() {
    Mahasiswa mhs[3];
    for (int i =0;i<3;i++) {
    cout << "Nomor Mahasiswa :";
    getline(cin , mhs[i].nim);
    cout << "Nama Mahasiswa :";
    getline(cin , mhs[i].nama);

    cout << "Alamat Mahasiswa :" << endl;
    cout << "\tNama Desa :";
    cin >> mhs[i].alamat.desa;
    cout << "\tNama Kota :";
    cin >> mhs[i].alamat.kota;

    cout << "Umur Mahasiswa :";
    cin >> mhs[i].umur ;
    cin.ignore(1, '\n');
    cout << endl;
    }
    for(int i = 0; i<3; i++) {
    cout << endl;
    cout << " Data Mahasiswa ke-" << (i+1) << ":" << endl;
    cout << "\n Nim  Mahasiswa:" << mhs[i].nim;
    cout << "\n Nama  Mahasiswa:" << mhs[i].nama;
    cout << "\n Alamat " << endl;
    cout << "\n\t Desa :" << mhs[i].alamat.desa;
    cout << "\n\t Kota :" << mhs[i].alamat.kota;
    cout << "\n umur  Mahasiswa: " << mhs[i].umur;
    cout << endl;
    }


}