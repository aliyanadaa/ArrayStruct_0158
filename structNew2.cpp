#include <iostream>
using namespace std;


int main(){
    orang mhs;
    cout << "Nama : ";
    cin >> mhs.nama;
    cout << "Desa : ";
    cin >> mhs.alamat.desa;
    cout << "Kota : ";
    cin >> mhs.alamat.kota;
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;

    //tampilkan 
    cout << "Nama :" << mhs.nama << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "KOta : " << mhs.alamat.kota << endl;
    cout << "Umur :" << mhs.umur << endl;
}