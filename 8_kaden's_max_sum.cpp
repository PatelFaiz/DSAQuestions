#include<bits/stdc++.h>
using namespace std;

int max_sum_subarray(int a[], int n){
    int current_sum = 0;
    int max_sum = a[0];

    for(int x = 0; x<n; x++){
        current_sum += a[x];

        if(current_sum > max_sum){
            max_sum = current_sum;
        }

        if(current_sum<0){
            current_sum = 0;
        }
    }
    return max_sum;
}

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    cout<<max_sum_subarray(a, n);

}