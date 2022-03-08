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

int main() {
	string s;
	getline(cin,s);
	int countAlpha =0,countNumber =0, countOther =0;
	for (int i=0; i<s.length(); i++)
	if (isalpha(s[i])) { 
    countAlpha++;
    } else if (isdigit(s[i])) { 
    countNumber++;
    } else {
    countOther++;
    }
    cout << countAlpha << " " << countNumber << " " << countOther;
    return 0;

}
