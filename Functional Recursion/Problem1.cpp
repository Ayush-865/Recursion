/*
Find sum of first N natural Numbers
*/

#include <iostream>
using namespace std;

int sum(int n){
    if(n==0) return 0;
    return n + sum(n-1);
}

int main()
{
    int n;
    cout<<"Enter Natural Number: ";
    cin>>n;
    cout<<"Sum of 1st "<<n<<" natural number's is "<<sum(n)<<endl;
    return 0;
}