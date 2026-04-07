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
        statusKuota = "Kuota Penuh !";
        break;
    case 3:
        namaJurusan = "Sistem Informasi";
        statusKuota = "Tersedia (5 Kursi)";
        break;
    default:
        namaJurusan = "Tidak Diketahui";
        statusKuota = "Error : Kode Jurusan Tidak Valid ";
        break;
    }

    void output()
    {
        cout << "\n=== HASIL SELEKSI ===" << endl;
        cout << "Jurusan yang dipilih = " << namaJurusan << endl;
        cout << "Status Kuota = " << statusKuota << endl;
        cout << "======================" << endl;
    }
}