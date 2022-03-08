#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,x;
	cin >> n;
	int array1[n],array2[n];
	for (int i=1; i<=n; i++) {
		cin >> array1[i];
	}
	bool ok = true;
	for (int i=1; i<=n; i++) {
		cin >> array2[i];
		if (array1[i] != array2[i]) ok = false;
	}
	if (ok) {
		cout << "YES";
		}
		else cout << "NO";
		return 0;
	}
	
