// 5. Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int eSum = 0;
    int oSum = 0;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            arr[i] *= 2;
        }
        else{
            arr[i] += 10;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}