#include <iostream>
using namespace std;

int main()
{
    int Pilihan;

    cout << " Staf Pengajar Pemerograman C++ : " << endl;
    cout << "==========================================" << endl;
    cout << " 1. Nur Alamsyah               \n" << endl;
    cout << " 2. Halid Budiman              \n" << endl;
    cout << " 3. Yusri Ikhwani              \n" << endl;
    cout << " 4. Dessy undandar             \n" << endl;
    cout << " 5. Rais Fathoni               \n" << endl;
    cout << " 6. Aulia Rahman               \n" << endl;
    cout << " 7. Zainudin                   \n" << endl;
    cout << " 8. Wagino                     \n" << endl;
    cout << " 9. Rasyidan                   \n" << endl;
    cout << " 10.Ramdhani                   \n" << endl;

    cout << "Staf Pengajar Pemerograman C++ : ";
    cin >> Pilihan;
    cout << endl;

    switch (Pilihan)
    {
    case 1:
        cout << "Pilihan anda benar \n " << endl;
        break;
    case 2:
        cout << "Pilihan anda benar \n " << endl;
        break;
    case 3:
        cout << "Pilihan anda salah \n " << endl;
        break;
    case 4:
        cout << "Pilihan anda salah \n " << endl;
        break;
    case 5:
        cout << "Pilihan anda benar \n " << endl;
        break;
    case 6:
        cout << "Pilihan anda salah \n " << endl;
        break;
    case 7:
        cout << "Pilihan anda benar \n " << endl;
        break;
    case 8:
        cout << "Pilihan anda benar \n " << endl;
        break;
    case 9:
        cout << "Pilihan anda salah \n " << endl;
        break;
    case 10:
        cout << "Pilihan anda benar \n " << endl;
        break;
        default:
        cout << " Pilihan anda tidak ada dalam daftar \n \n";
    }
    return 0;
}


