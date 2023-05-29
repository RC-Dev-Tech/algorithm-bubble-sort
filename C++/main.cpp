#include <iostream>
using namespace std;

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // 每一回合的比對.
        for (int j = 0; j < size - i - 1; j++) {
            // 檢查並調整交換相鄰的元素的順序.
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // 原始數列.
    cout << "original sequence: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    // 泡沫排列.
    sort(arr, size);

    // 排序後數列.
    cout << "\nsorted sequence: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
