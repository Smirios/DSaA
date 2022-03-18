#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int n = 10;
    arr[0] = 2;
    for (int i = 1; i < n; i++) {
        if (i % 2) { arr[i] = i - arr[i / 4] * 2; }
        else { arr[i] = i * 10 - arr[i - 1] * 2; }
    };
    int max = 0, index = 0;
    for (int i = 0; i < n; i++) {  // first task
        if (!(arr[i] % 2) and (max < arr[i])) { index = i; max = arr[i]; }
        cout << arr[i] << ' ';
    }
    cout << endl << index << endl;
}
