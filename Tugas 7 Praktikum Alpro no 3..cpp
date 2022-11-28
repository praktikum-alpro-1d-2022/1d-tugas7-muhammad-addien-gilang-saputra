#include <iostream>
using namespace std;

int main(){
    int i, j, m, n;
    int matriks[10][10], transpose[10][10];

    cout << "Masukkan jumlah baris : ";
    cin >> m;
    cout << "Masukkan jumlah kolom : ";
    cin >> n;

    cout << "Masukkan elemen matriks \n";
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            cout << "Masukkan baris ke " << i+1 << " kolom ke " << j+1 << " = ";
            cin  >> matriks[i][j];
        }
    }

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            transpose[j][i] = matriks[i][j];
        }
    }

    cout << "Hasil Transpose Matriks Tersebut Adalah : \n";
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout << transpose[i][j] << "\t";
        }
    cout << endl;
    }
}
