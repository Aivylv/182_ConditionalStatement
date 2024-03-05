#include <iostream>
using namespace std;

int main()
{
    int nMtk, nFis, Rerata;
    string status;

    cout << "Masukkan Nilai Matematika : ";
    cin >> nMtk;

    cout << "Masukkan Nilai Fisika : ";
    cin >> nFis;

    Rerata = (nMtk + nFis) / 2;

    if (Rerata > 60) {
        status = "Lulus";
    }
    else if (nMtk > 70) {
        status = "Lulus";
    }
    else {
        status = "Tidak Lulus";
    }

    cout << "Nilai Matematika : " << nMtk << endl;
    cout << "Nilai Fisika : " << nFis << endl;
    cout << "Rata - rata nilai : " << Rerata << endl;
    cout << "Statusnya adalah " << status << endl;
    return 0;
}