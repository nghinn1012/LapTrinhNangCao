bool isPrime (int number) {
    bool ok= true;
    if ((number==0) || (number ==1) || (number <0)) return false;
    for (int i=2; i<= int(sqrt(number)); i++) {
        if (number%i==0) ok = false;
    }
    return ok;
}
