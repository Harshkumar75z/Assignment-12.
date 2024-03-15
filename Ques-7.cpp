//  If an array arr contains n elements, then check if the given array is a palindrome or not .

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
    bool flag = true;
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if(flag==true) cout<<"Palindrome";
    else cout<<"Not Palindrome";
    
}
