#include<iostream>
using namespace std;
void selectionsort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        if(minIndex !=i){
            swap(arr[i],arr[minIndex]);
        }
    }
}
int main(){
    int n;
    cout<<"Enter the no of element";
    cin>>n;int arr[n];
    cout<<"Enyer the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr, n);
    cout<<"Sorted Array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}