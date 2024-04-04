/*
Print n to 0 recursively.
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

void printNum(int n){
    if(n<0) return;
    cout<<n<<" ";
    printNum(n-1);
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNum(n);
    return 0;
}