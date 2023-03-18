#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int partition (int arr[], int low, int high)  {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)  {
        if (arr[j] < pivot)  {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)  {
    if (low < high){
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {64,45,34,45,25,1,32,75,30};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Array Element:\n";
    printArray(arr, n);


    quickSort(arr, 0, n-1);
    cout << "\nQuick sorted array: \n";
    printArray(arr, n);

    return 0;
}
