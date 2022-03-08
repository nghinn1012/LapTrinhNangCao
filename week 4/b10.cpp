string toLower (string s) {
    string t=s;
    for (int i=0; i<t.length(); i++) {
        if ((t[i] >= 65) && (t[i] <= 90))
           t[i] = t[i] + 32;
    }
    return t;
}
