#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	getline(cin,s);
	int i=0;
	while (i<s.length()) {
		   if ((i > s.length()-4) || (s.substr(i,4) != "Zues")) {
		   	  cout << s[i];
		   	  i++;
		   	  }
		   	  else 
		   	  {
		   	  	cout << "Zeus";
		   	  	i= i+4;
		   	}
		}
   return 0;
}
