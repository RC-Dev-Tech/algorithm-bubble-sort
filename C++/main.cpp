#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // 每一輪比較的次數.
        for (int j = 0; j < size - i - 1; j++) {
            // 如果相鄰元素順序錯誤，則交換它們.
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

    cout << "original sequence: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, size);

    cout << "\nsorted sequence: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
