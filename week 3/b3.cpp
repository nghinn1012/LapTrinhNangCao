#include <bits/stdc++.h> 
using namespace std;  

int main()  
{  
    int arr[1001];
    int n;
    cin >> n;
    for (int i=1; i<=n; i++)
	     cin >> arr[i];
	for (int i=1; i<=n; i++) {
    	if (i>1) 
    	{
           if ((arr[i] != arr[i-1]))
               cout << arr[i] << " ";
        }
            else cout << arr[i] << " ";
        }
    return 0;  
}  
