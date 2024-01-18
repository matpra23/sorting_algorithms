#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); 
            }
        }
    }
}

void printArr(int *t, int size){
    for (int i = 0; i<size; i++){
        cout << t[i] << "\n";
    }
}

int main(){
    int arr[] = {9,4,6,2,7,1,3,5}; 
    int N = sizeof(arr) / sizeof(arr[0]); 
    bubbleSort(arr, N); 
    cout << "Sorted array: \n"; 
    printArr(arr, N);
    return 0;
}