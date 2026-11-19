#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    const int size = sizeof(arr) / sizeof(arr[0]);
    int rev[size];

    for (int i = 0; i < size; i++) {
        rev[i] = arr[size - 1 - i];
    }

    for (int k = 0; k < size; k++) {
        cout << rev[k] << " ";
    }
    cout << endl;

    return 0;
}