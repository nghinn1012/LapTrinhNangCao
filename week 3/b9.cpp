#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	getline(cin,s);
	int i=0;
	while (i<s.length()) {
		   if (s[i] == ' ') i++;
		   else break;
		   }
	for (int j=1; j<=i; j++) cout << " ";
	while (i<s.length()) {
		if (s[i] != ' ') {
		   cout << s[i];
		   i++;
		   }
		   else {
		   	 cout << " ";
		   	 while (s[i] == ' ') i++;
		   	 }
		}
   return 0;
}
