void sortAscending(float array[], int size) {
    float tam;
    for (int i=0; i<size; i++)
        for (int j=i+1; j<size; j++) {
            if (array[i] > array[j])
            {
                tam=array[i];
                array[i] =array[j];
                array[j] = tam;
            }
        }
}

void reverseArray(float array[], int size) {
    float tam;
    for (int i=0; i<=size/2-1; i++) {
                tam=array[i];
                array[i] =array[size-i-1];
                array[size-i-1] = tam;
    }
}
void sort(float array[], int size, bool isAscending) {
     sortAscending(array,size);
     if (isAscending == false) reverseArray(array,size);
}
