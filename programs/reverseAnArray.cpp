#include <iostream>
using namespace std;

void reverse(int arr[], int a, int b) {
    //uisng two pointer techinque to reverse an array
    while(a < b) {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    reverse(arr, 0, n-1);
    printArray(arr, n);
}