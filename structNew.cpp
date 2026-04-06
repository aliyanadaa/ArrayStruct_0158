#include <iostream>
using namespace std;

struct orang
{
    string nama;
    string alamat;
    int umur;
};

int main(){
    orang mhs;
    cout << "Nama : ";
    cin >> mhs.nama;
    cout << "alamat : ";
    cin >> mhs.alamat;
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;

    //tampilkan 
    cout << "Nama :" << mhs.nama << endl;
    cout << "alamat : " << mhs.alamat << endl;
    cout << "Umur :" << mhs.umur << endl;
}

