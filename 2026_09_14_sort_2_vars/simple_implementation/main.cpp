#include <iostream>

void my_sort(int *arr, const int size);

int main() {
    int size = 0;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Размер массива должен быть положительным.\n";
        return 1;
    }

    int* arr = new int[size];

    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Массив до сортировки: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    my_sort(arr, size);

    std::cout << "Массив после сортировки: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    delete[] arr;
    return 0;
}

void my_sort(int *arr, const int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                const int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
