bool kt(char x) {
	if ((x== 'u') || (x == 'e') || (x == 'o') || (x == 'a') || (x == 'i'))
	    return true;
	    else return false;
}

string pigLatin(string word) {
    string t = "";
    if (kt(word[0]))
    	t= word+"way";
       else{
        for (int j=1; j<word.length();j++) t = t+ word[j];
		t=t+word[0]+"ay"; }
	return t;
}
