#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> Arr{ 2 };
	vector<int>::iterator it;
	for (int i = 1; i <= n; i++)
	{
		Arr.resize(i + 1);
		if (i % 2) { Arr[i] = i - Arr[i / 4] * 2; }
		else { Arr[i] = i * 10 - Arr[i - 1] * 2; }
		cout << Arr[i] << ' ';
	}
	int max = 0, index = 0;
	for (int i = 0; i < n; i++) {	// first task
		if (!(Arr[i] % 2) and (max < Arr[i])) { index = i; max = Arr[i]; }
	}
	cout << endl << index << endl;
	int tmp;						//second task
	cin >> tmp;
	it = Arr.begin();
	Arr.insert(it+index + 1, tmp);
	Arr.erase(it+index-1);
	for (int i = 0; i < n + 1; i++) {
		cout << Arr[i] << ' ';
	}
}