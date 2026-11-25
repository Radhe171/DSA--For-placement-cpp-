
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) cin >> arr[i];

    long long sum = 0, product = 1;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
    return 0;
 }