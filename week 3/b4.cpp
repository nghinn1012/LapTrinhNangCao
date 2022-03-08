#include <bits/stdc++.h> 
using namespace std;  

int main()  
{  
    double arr[1001];
    int n;
    cin >> n;
    double k;
    for (int i=1; i<=n; i++)
	     cin >> arr[i];
	cin >> k;
	int pos;
	for (int i=1; i<=n; i++) {
	    if (arr[i] > k) {
	        pos = i;
	        break;
	    }
	}
	for (int i=n+1; i>=pos+1;i--) {
	    arr[i] = arr[i-1];
	}
	arr[pos]=k;
	for (int i=1; i<=n+1; i++)
	     cout << setprecision(2) << fixed << arr[i] << " ";
    return 0;  
}  
