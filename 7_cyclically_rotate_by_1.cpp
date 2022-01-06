#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotate_by_one(int arr[], int n){
    int i = 0, j=n-1;
    while(i!=j){
        swap(arr[i], arr[j]);
        i++;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    rotate_by_one(a, n);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}