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
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa :";
    getline(cin , mhs.nim);
    cout << "Nama Mahasiswa :";
    getline(cin , mhs.nama);

    cout << "Alamat Mahasiswa :" << endl;
    cout << "\tNama Desa :";
    cin >> mhs.alamat.desa;
    cout << "\tNama Kota :";
    cin >> mhs.alamat.kota;

    cout << "Umur Mahasiswa :";
    cin >> mhs.umur ;

    cout << endl;
    cout << "\n Nim  Mahasiswa:" << mhs.nim;
    cout << "\n Nama  Mahasiswa:" << mhs.nama;
    cout << "\n Alamat " << endl;
    cout << "\n\t Desa :" << mhs.alamat.desa;
    cout << "\n\t Kota :" << mhs.alamat.kota;
    cout << "\n umur  Mahasiswa: " << mhs.umur;
    


}