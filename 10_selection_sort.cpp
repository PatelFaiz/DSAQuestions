#include<iostream>
using namespace std;

void swap(int* x, int * y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int arr[], int n){
    int minIndex;

    for(int i=0; i<n-1; i++){
        minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(&arr[minIndex], &arr[i]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}