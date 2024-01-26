#include <iostream>
#include <algorithm>

void cetak_tiga_terbesar(int arr[], int panjang) {
    // Mengurutkan array secara menurun
    std::sort(arr, arr + panjang, std::greater<int>());

    // Mencetak tiga elemen terbesar
    std::cout << "Tiga elemen terbesar: ";
    for (int i = 0; i < std::min(3, panjang); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int hitung_elemen_genap(int arr[], int panjang) {
    int jumlah_genap = 0;

    for (int i = 0; i < panjang; ++i) {
        if (arr[i] % 2 == 0) {
            jumlah_genap++;
        }
    }

    return jumlah_genap;
}

int main() {
    const int panjang_array = 10;
    int array_sampel[panjang_array] = {4, 2, 9, 4, 5, 6, 7, 8, 9, 10};

    // Memanggil fungsi untuk mencetak tiga elemen terbesar
    cetak_tiga_terbesar(array_sampel, panjang_array);

    std::cout << "Array: [";
    for (int i = 0; i < panjang_array; ++i) {
        std::cout << array_sampel[i];
        if (i < panjang_array - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    int hasil = hitung_elemen_genap(array_sampel, panjang_array);

    std::cout << "Jumlah elemen genap: " << hasil << std::endl;

    return 0;
}