#include<iostream>
using namespace std;

void swap(int* el1, int* el2){
    int temp;
    temp = *el1;
    *el1 = *el2;
    *el2 = temp;
}

void bubble_sort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

int main(){
    int n, k;
    cin>>n;
    int arr[n];
    for(int i= 0; i<n; i++)
        cin>>arr[i];
    
    cin>>k;

    bubble_sort(arr, n);

    cout<<k<<"th smallest element: "<<arr[k-1]<<endl;
    cout<<k<<"th largest element: "<<arr[n-k]<<endl;

    return 0;
}