#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int current = arr[i];
        int index = i;

        while(index>0 && arr[index-1] > current){
            arr[index] = arr[index-1];
            index--;
        }
        arr[index] = current;
    }
}

int main(){
    int n;

    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<n; i++){
        int current = arr[i];
        int j = i-1;

        while(arr[j] > current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    insertionSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}