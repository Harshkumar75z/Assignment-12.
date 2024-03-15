// 1. Count the number of elements strictly greater than x in the given array.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter x : ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            cout<<arr[i]<<" ";
        }
    }
}