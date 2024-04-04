/*
    Print your name recursively.
    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

void printName(int a, int n)
{
    if(a>=n)
        return;
    cout<<"Ayush\n";
    printName(a+1,n);
}

int main()
{
    int n;
    cout<<"Enter number of times you wish to print you name: ";
    cin>>n;
    printName(0,n);
    return 0;
}