#include<iostream>
using namespace std;

void swap(int *val1, int *val2){
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp; 
}

int printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++) // for number of passes
    {
        for (int j = 0; j < n-1-i; j++) // for number of comparisons
        {
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
        
    }
    return 0;
    
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter the no of elements: "<<endl;
    cin>>n;

    cout<<"Enter "<<n<<" elements of array: "<<endl;

    for (int k=0; k<n; k++){
       cin>>arr[k]; 
    }

    // int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before sorting: "<<endl;
    printArray(arr, n); // Finction to print an array
    bubbleSort(arr, n); // Fuction to sort an array
    cout<<"\n\nAfter sorting: "<<endl;
    printArray(arr, n); // Pronting array after sorting
    return 0;
}
