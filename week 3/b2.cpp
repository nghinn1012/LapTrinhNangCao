#include <bits/stdc++.h> 
using namespace std;  
   
void swap(float* a, float* b)  
{  
     float t = *a;  
    *a = *b;  
    *b = t;  
}  
  
int partition (float arr[], int low, int high)  
{  
    float pivot = arr[high]; 
    int i = (low - 1);  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        if (arr[j] > pivot)  
        {  
            i++; 
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
  
void quickSort(float arr[], int low, int high)  
{  
    if (low < high)  
    {  
        int pi = partition(arr, low, high);  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
  
void printArray(float arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << setprecision(2) << fixed << arr[i] << " ";  
    cout << endl;  
}  
  
int main()  
{  
    float arr[1001];
    int n;
    cin >> n;
    for (int i=0; i<=n-1; i++) {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);  
    printArray(arr, n);  
    return 0;  
}  
