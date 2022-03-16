#include <iostream>
using namespace std;
int main() {
	int* array;
	int n;
	int m = 7652, c = 3497; 
	cin >> n;
	array = new int[n]; 
	array[0] = 153;
	for (int i = 1; i < n; i++) { 
		array[i] = (m * array[i - 1] + i) % c;
	};
	for (int i = 0; i < n; i++) { 
		cout << array[i] << ' ';
	};
	int tmp = 0;
	n = 4;								
	int array_example[4] = { 30 , 4, 19, 9 }; 
	for (int i = 0; i <= n - 1; i++) {
		for (int j = 2; j < array_example[i]; j++) {
			if (!(array_example[i] % j)) { tmp = i; break; } 
		}
	};
	if (tmp) { cout << endl << "index is " << tmp-1 << endl; };
	cin >> array_example[tmp];
	for (int i = 0; i < n; i++) { 
		cout << array_example[i] << ' ';
	};
}