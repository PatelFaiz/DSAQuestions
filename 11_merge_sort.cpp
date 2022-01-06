#include<iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right){
    int i, j, k;
    
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for(i = 0; i<n1; i++){
        L[i] = arr[left + i];
    }
    for(j = 0; j<n2; j++){
        R[j] = arr[mid+1+j];
    }

    i=0;
    j=0;
    k=left;

    while(i<n1 && j<n2){
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }
    while(i<n1)
        arr[k++] = L[i++];
    
    while(j<n2)
        arr[k++] = R[j++];

}

void mergesort(int arr[], int left, int right){
    if(left<right){
        int mid = left + (right - left) / 2;
        mergesort(arr, left, mid);
        mergesort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    mergesort(arr, 0, n);

    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}