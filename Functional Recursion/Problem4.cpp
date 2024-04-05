/*
Check if a given string is Palindrome or not using Recursion.
*/

#include <bits/stdc++.h>
using namespace std;


bool pallindrome(int i, string s){
    if(i >= s.length()/2) return true;
    if(s[i] != s[s.length()-i-1]) return false;
    return pallindrome(i+1, s);
}

int main()
{
    string s;
    cout<<"Enter any string to check if it's Palindrome or not: ";
    cin>>s;
    if (pallindrome(0,s))
    {
        cout<<"The given string is Palindrome.\n"; 
    }else{
        cout<<"The given string is not Palindrome.\n"; 
    }
    
    return 0;
}