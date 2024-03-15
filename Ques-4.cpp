// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

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
        if(i%2==0){
            eSum += arr[i];
        }
        else{
            oSum +=arr[i];
        }
    }
    cout<<eSum-oSum;
}