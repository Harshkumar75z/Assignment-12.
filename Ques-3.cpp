// 3. Check the given array is sorted or not.

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
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"Sorted";
    else cout<<"Not Sorted";
}