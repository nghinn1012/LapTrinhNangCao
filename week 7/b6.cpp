
int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) {
    int *mergeArr = new int[10000];
    int firstIndex = 0, secondIndex = 0, mergeIndex = 0;
    if (firstArr[0]<firstArr[1]) {
    while (firstIndex < lenArr1 && secondIndex < lenArr2){
        if(firstArr[firstIndex] <= secondArr[secondIndex]){
            mergeArr[mergeIndex] = firstArr[firstIndex];
            firstIndex++;
        }else{
            mergeArr[mergeIndex] = secondArr[secondIndex];
            secondIndex++;
        }
        mergeIndex++;
    }
    while(firstIndex < lenArr1){
          mergeArr[mergeIndex] = firstArr[firstIndex];
          mergeIndex++;
          firstIndex++;
    }
    
    while(secondIndex < lenArr2){
        mergeArr[mergeIndex] = secondArr[secondIndex];
        mergeIndex++;
        secondIndex++;
    }
    }
    else {
        while (firstIndex < lenArr1 && secondIndex < lenArr2){
        if(firstArr[firstIndex] >= secondArr[secondIndex]){
            mergeArr[mergeIndex] = firstArr[firstIndex];
            firstIndex++;
        }else{
            mergeArr[mergeIndex] = secondArr[secondIndex];
            secondIndex++;
        }
        mergeIndex++;
    }
    while(firstIndex < lenArr1){
          mergeArr[mergeIndex] = firstArr[firstIndex];
          mergeIndex++;
          firstIndex++;
    }
    
    while(secondIndex < lenArr2){
        mergeArr[mergeIndex] = secondArr[secondIndex];
        mergeIndex++;
        secondIndex++;
    }
    }
    return mergeArr;
}
