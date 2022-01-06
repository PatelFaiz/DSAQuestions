#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void swap(int * e1, int * e2){
//     int temp = *e1;
//     *e1 = *e2;
//     *e2 = temp;
// }

void rearrange(int a[], int n){
    int j=0;
    for(int i=0; i<n; i++){
        if (a[i]<0){
            if(i != j)
                swap(a[i], a[j]);
            j++;
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

    rearrange(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}