#include<iostream>
using namespace std;

void swap(int* el1, int * el2){
    int temp = *el1; 
    *el1 = *el2;
    *el2 = temp;
}

void sort(int a[], int n){
    int lo = 0;
    int hi = n-1;
    int mid = 0;

    while(mid<=hi){
        switch(a[mid]){
            case 0:
                swap(a[lo++], a[mid++]);
                break;

            case 1:
                mid++;
                break;

            case 2:
                swap(a[mid], a[hi--]);
                break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }



    sort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// Click here for explaination
// https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/