#include <iostream>
using namespace std;

int main() {
    int n;
    string nama[50];
    float tugas[50], uts[50], uas[50], nilaiAkhir[50];
    char grade[50];

    cout << "Masukkan jumlah siswa: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nSiswa ke-" << i + 1 << endl;
        cout << "Nama        : ";
        cin >> nama[i];
        cout << "Nilai Tugas : ";
        cin >> tugas[i];
        cout << "Nilai UTS   : ";
        cin >> uts[i];
        cout << "Nilai UAS   : ";
        cin >> uas[i];

        nilaiAkhir[i] = (tugas[i] * 0.3) + (uts[i] * 0.3) + (uas[i] * 0.4);

        if (nilaiAkhir[i] >= 85)
            grade[i] = 'A';
        else if (nilaiAkhir[i] >= 70)
            grade[i] = 'B';
        else if (nilaiAkhir[i] >= 55)
            grade[i] = 'C';
        else if (nilaiAkhir[i] >= 40)
            grade[i] = 'D';
        else
            grade[i] = 'E';
    }

    cout << "\n===== DATA NILAI SISWA =====\n";
    for (int i = 0; i < n; i++) {
        cout << nama[i]
             << " | Nilai Akhir: " << nilaiAkhir[i]
             << " | Grade: " << grade[i] << endl;
    }

    return 0;
}
