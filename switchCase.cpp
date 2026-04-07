#include <iosetream>
using namespace std;

int KodeJurusan;
string namaJurusan, statusKuota;

void input()
{
    cout << "===PENDAFTARAN JURUSAN===" << endl;
    cout << "1. Teknik Informatika" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Masukkan kode jurusan (1-3) = ";
    cin >> KodeJurusan;
}

void pilihJurusan()
{
    switch (KodeJurusan)
    {
    case 1:
        namaJurusan = "Teknik Informatika";
        statusKuota = "Tersedia (15 Kursi)";
        break;
    case 2:
        namaJurusan = "Teknik Elektro";
        statusKuota = "KuotaPenuh";
        break;
    }
}