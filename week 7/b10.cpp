void rFilter(char *s) {
    int n = strlen(s);
    for (int i = n - 1; i >= 0; i--) {
        if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))
            break;
        s[i] = '_';
    }

