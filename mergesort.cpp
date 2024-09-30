#include<iostream>
using namespace std;
void merge(int arr[],int left, int mid, int right){
    int n1=mid-left+1;
    int n2=right-mid;
    int leftArray[n1],rightArray[n2];
    for(int i=0;i<n1;i++){
        leftArray[i]=arr[left+i];
    }
    for(int j=0;j<n2;j++){
        rightArray[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(leftArray[i]<=rightArray[j]){
            arr[k]=leftArray[i];
            i++;
        }
        else{
            arr[k]=rightArray[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=leftArray[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=rightArray[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
int main(){
    int n;
    cout<<"Enter the noof elemnent you wamt to enter";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);

    cout<<"Sorted Array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}