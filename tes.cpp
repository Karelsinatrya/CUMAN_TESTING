#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAX = 100;
    string merk[MAX], tipe[MAX];
    int tahun[MAX], harga[MAX];
    int jumlah = 0;
    int pilihan;

    do
    {
        cout << "\n=== SHOWROOM MOBIL ===\n";
        cout << "1. Tambah Data Mobil\n";
        cout << "2. Tampilkan Data Mobil\n";
        cout << "3. Cari Mobil Berdasarkan Merk\n";
        cout << "4. Hitung Total Harga Mobil\n";
        cout << "5. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "\nJumlah mobil yang ingin ditambah: ";
            int n;
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "\nMobil ke-" << jumlah + 1 << endl;
                cout << "Merk  : ";
                cin >> merk[jumlah];
                cout << "Tipe  : ";
                cin >> tipe[jumlah];
                cout << "Tahun : ";
                cin >> tahun[jumlah];
                cout << "Harga : ";
                cin >> harga[jumlah];
                jumlah++;
            }
            break;

        case 2:
            cout << "\n=== DAFTAR MOBIL ===\n";
            for (int i = 0; i < jumlah; i++)
            {
                cout << i + 1 << ". " << merk[i] << " - " << tipe[i]
                     << " (" << tahun[i] << ") Rp." << harga[i] << endl;
            }
            break;

        case 3:
        {
            string cari;
            cout << "Masukkan merk yang dicari: ";
            cin >> cari;
            bool ketemu = false;
            for (int i = 0; i < jumlah; i++)
            {
                if (merk[i] == cari)
                {
                    cout << merk[i] << " - " << tipe[i]
                         << " Rp." << harga[i] << endl;
                    ketemu = true;
                }
            }
            if (!ketemu)
                cout << "Mobil tidak ditemukan!\n";
            break;
        }

        case 4:
            int total;
            total = 0;
            for (int i = 0; i < jumlah; i++)
            {
                total += harga[i];
            }
            cout << "Total harga seluruh mobil: Rp." << total << endl;
            break;
        }

    } while (pilihan != 5);

    cout << "Terima kasih.\n";
    return 0;
}