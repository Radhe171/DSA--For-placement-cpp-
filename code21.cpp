
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        bool seen = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) { seen = true; break; }
        }
        if (!seen) cout << arr[i] << " ";
    }
    return 0;
}