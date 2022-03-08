#include <bits/stdc++.h>

using namespace std;

bool isalpha (char x) {
	if (('a' <= x) && ( x <= 'z' )|| (('A' <= x) && (x <= 'Z')))
	    return true;
	    else return false;
}

bool isdigit (char x) {
	if (('0' <= x) && (x <= '9'))
	    return true;
	    else return false;
}

bool isalnum(string s) {
	bool ok = true;
	for (int i=0; i<s.length(); i++) {
	    if (!(isalpha(s[i]))  && !(isdigit(s[i]))) ok = false;
	}
	return ok;
}

bool size(string s) {
	if ((s.length()>=6) && (s.length()<=15)) 
	    return true;
	    else return false;
}

bool so(string s) {
	 if (('0' <= s[0]) && (s[0] <= '9'))
	    return false;
	    else return true;
}

int main() {
	string s;
	getline(cin,s);
	cout << s[0];
	if (!so(s)) cout << "Invalid username.";
	   else if (!size(s)) cout << "Invalid username.";
	        else if (!(isalnum(s))) cout << "Invalid username.";
	             else cout << "Valid username.";
   return 0;
}
