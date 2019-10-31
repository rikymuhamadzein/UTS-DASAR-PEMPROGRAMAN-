#include <iostream>
using namespace std;

int main()
{
    int Nama_Arry[10];
    cout << "Masukan nilai pada : " << endl;
    for (int C=0; C<10; C++)
    {
        cout << " Elmen [" << C << "] = ";
        cin >> Nama_Arry [C];
    }
    cout << "\n";

    cout << " Tampilkan nilai yang dimasukan : " << endl;
    for (int D = 0; D<10; D++)
    {
        cout << " Tampilkan yang terdapat elmen ke ";
        cout << D+1 << " = " << Nama_Arry[D] << endl;
    }
    cout << "\n";
    return 0;

}
