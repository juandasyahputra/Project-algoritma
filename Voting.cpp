#include <iostream>
using namespace std;

int main() {
    int jumlahPemilih;
    int pilihan;
    int suaraA = 0, suaraB = 0;

    cout << "Masukkan jumlah pemilih: ";
    cin >> jumlahPemilih;

    for (int i = 1; i <= jumlahPemilih; i++) {
        cout << "\nPemilih ke-" << i << endl;
        cout << "1. Calon A\n";
        cout << "2. Calon B\n";
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1)
            suaraA++;
        else if (pilihan == 2)
            suaraB++;
    }

    cout << "\n===== HASIL VOTING =====\n";
    cout << "Calon A: " << suaraA << endl;
    cout << "Calon B: " << suaraB << endl;

    return 0;
}
