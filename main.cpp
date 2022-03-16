#include <iostream>
using namespace std;

int main() {
    int* arr;
    int n;
    cin >> n;
    arr = new int[n];
    arr[0] = 2;
    for (int i = 1; i < n; i++) {
        if (i % 2) { arr[i] = i - arr[i / 4]*2; }
        else { arr[i] = i * 10 - arr[i - 1] * 2; }
    };
    int max = 0, index = 0;
    for (int i = 0; i < n; i++) {  // first task
        if (!(arr[i] % 2) and (max < arr[i])) { index = i; max = arr[i]; }
        cout << arr[i] << ' ';
    }
    cout << endl << index << endl;
    int* arrtask3;
    arrtask3 = new int[n - 1];
    for (int i = 0;i < n - 1;i++) {
        if (i < index - 1) {
            arrtask3[i] = arr[i];
        }
        else { arrtask3[i] = arr[i + 1]; }
    }
    /*for (int i = 0; i < n - 1; i++) {
        cout << arrtask3[i] << ' ';
    }*/
    int* arrtask2;
    arrtask2 = new int[n + 1];
    for (int i = 0;i <= n;i++) {
        if (i <= index) {
            arrtask2[i] = arr[i];
        }
        else { arrtask2[i] = arr[i - 1]; }
    }
    cin >> arrtask2[index + 1];
    /*for (int i = 0; i <= n; i++) {
        cout << arrtask2[i] << ' ';
        }*/
    }
