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
    cin >> mhs.nim;
    cout << "Nama Mahasiswa :";
    cin >> mhs.nama;

    cout << "Alamat Mahasiswa :" << endl;
    cout << "\tNama Desa :";
    cin >> mhs.alamat.desa;
    cout << "\tNama Kota :";
    cin >> mhs.alamat.kota;

    cout << "Umur Mahasiswa :";
    cin >> mhs.umur;

   
    


}