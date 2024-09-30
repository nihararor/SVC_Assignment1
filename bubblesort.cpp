#include<iostream>
using namespace std;
void bubblesort(){
    int n;
    cout<<"Enter the number of element you want to enter: "<<n<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elemnts of an array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool swap;
    for(int i=0;i<n-1;i++){
        swap=false;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap[a[j],a[j+1]];
                swap=true;
            }
        }
        if(!swap){
            break;
        }
        cout<<"Sorted array";
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    bubblesort();
    return 0;
}