/*
Reverse an Array using Recursion
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int a , int arr[], int n){
    if(a>=n/2) return;
    swap(arr[a], arr[n-a-1]);
    reverse(a+1, arr, n);
}

int main()
{
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Array Before Reversing: ";
    print(arr, n);
    reverse(0,arr,n);
    cout<<"Array After Reversing: ";
    print(arr, n);
    return 0;
}