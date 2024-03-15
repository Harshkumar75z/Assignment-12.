// WAP to find the largest three elements in array.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n  :";
    cin>>n;
    int arr[n];
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int smax = INT_MIN;
    for(int i=0;i<n;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax = arr[i];
        }
    }
    int tmax = INT_MIN;
    for(int i=0;i<n;i++){
        if(tmax<arr[i] && arr[i]!=max && arr[i]!=smax){
            tmax = arr[i];
        }
    }
    cout<<"First number : "<<max<<endl;
    cout<<"Second number : "<<smax<<endl;
    cout<<"Third number : "<<tmax;
}