#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i=1; i<=n; i++) {
		cin >> arr[i];
	}
	bool ok = true;
	for (int i=1; i<n/2; i++) {
		if (arr[i] != arr[n-i+1]) ok = false;
		}
	if (ok) {
		cout << "Symmetric array.";
		}
		else cout << "Asymmetric array.";
		return 0;
	}
	
