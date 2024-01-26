#include <iostream>

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

    int hasil = hitung_elemen_genap(array_sampel, panjang_array);

    std::cout << "Array: [";
    for (int i = 0; i < panjang_array; ++i) {
        std::cout << array_sampel[i];
        if (i < panjang_array - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

 std::cout << "Jumlah elemen genap: " << hasil << std::endl;

return 0;
}