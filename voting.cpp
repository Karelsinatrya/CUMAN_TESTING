#include <iostream>
using namespace std;

int main()
{
    const int MAX = 10;
    string kandidat[MAX];
    int suara[MAX];
    int jumlah = 0;
    int pilihan;

    // inisialisasi suara
    for (int i = 0; i < MAX; i++)
    {
        suara[i] = 0;
    }

    do
    {
        cout << "\n=== SISTEM VOTING MOBIL FAVORIT ===\n";
        cout << "1. Tambah Mobil Favorit\n";
        cout << "2. Tampilkan Mobil\n";
        cout << "3. Voting\n";
        cout << "4. Tampilkan Hasil Voting\n";
        cout << "5. Tampilkan Pemenang\n";
        cout << "6. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
        {
            int n;
            cout << "\nJumlah mobil yang ingin ditambah: ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "Nama mobil ke-" << jumlah + 1 << " : ";
                cin >> kandidat[jumlah];
                suara[jumlah] = 0;
                jumlah++;
            }
            break;
        }

        case 2:
            cout << "\n=== DAFTAR MOBIL FAVORIT ===\n";
            for (int i = 0; i < jumlah; i++)
            {
                cout << i + 1 << ". " << kandidat[i] << endl;
            }
            break;

        case 3:
        {
            int pilih;
            cout << "\nPilih mobil favorit (1-" << jumlah << "): ";
            cin >> pilih;

            if (pilih >= 1 && pilih <= jumlah)
            {
                suara[pilih - 1]++;
                cout << "Voting berhasil!\n";
            }
            else
            {
                cout << "Pilihan tidak valid!\n";
            }
            break;
        }

        case 4:
            cout << "\n=== HASIL VOTING ===\n";
            for (int i = 0; i < jumlah; i++)
            {
                cout << kandidat[i] << " : " << suara[i] << " suara\n";
            }
            break;

        case 5:
        {
            int max = suara[0];
            int pemenang = 0;
            for (int i = 1; i < jumlah; i++)
            {
                if (suara[i] > max)
                {
                    max = suara[i];
                    pemenang = i;
                }
            }
            cout << "\nMobil Favorit Terpilih: " << kandidat[pemenang]
                 << " dengan " << max << " suara.\n";
            break;
        }
        }
    } while (pilihan != 6);

    cout << "Terima kasih telah menggunakan sistem voting.\n";
    return 0;
}