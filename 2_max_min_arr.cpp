#include<iostream>
using namespace std;

struct minmax{
    int min;
    int max;
};

struct minmax getMinMax(int arr[], int n){
    struct minmax pair;

    if(n == 1){
        pair.min = arr[0];
        pair.max = arr[0];
    }
    else if(arr[0]>arr[1]){
        pair.min = arr[1];
        pair.max = arr[0];
    }
    else if(arr[0]<arr[1]){
        pair.min = arr[0];
        pair.max = arr[1];
    }

    for(int i=2; i<n; i++){
        if (arr[i] > pair.max){
            pair.max = arr[i];
        }
        if(arr[i]<pair.min){
            pair.min = arr[i];
        }
    }
    return pair;
}

int main(){
    int arr[] = {3, 7, 3, 2, 10, 33};

    int min = INT_MAX, max = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);                                          
    
    struct minmax pair = getMinMax(arr, n);

    cout<<"Smallest number: "<<pair.min<<endl;
    cout<<"Largest number: "<<pair.max<<endl;

    return 0;
}