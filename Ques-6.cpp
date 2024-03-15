// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        bool flag =true;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(arr[i]==arr[j]){
                flag = false;
                break;
            }
        }
        if(flag==true){
            cout<<arr[i];
            break;
        }
    }
}