/*
Print 0 to n recursively.
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

void printNum(int a,int n){
    if(a>n) return;
    cout<<a<<" ";
    printNum(a+1,n);
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNum(0,n);
    return 0;
}