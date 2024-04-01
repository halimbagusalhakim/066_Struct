#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    int umur;
};

int main() {
    Mahasiswa mhs;
    cout << "Nomer Mahasiswa :";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa :";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa :";
    cin >> mhs.alamat;
    cout << "Umur Mahasiswa :";
    cin >> mhs.umur;

    cout << endl;
    cout <<"\n NIM  Mahasiswa:" << mhs.nim;
    cout << "\n Nama Mahasiswa : " << mhs.nama;
    cout << "\n Alamat Mahasiswa: " << mhs.alamat;
    cout << "\n Umur Mahasiswa : " << mhs.umur;
}

