/*
Print N to 1 using Backtracking
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

void printNum(int n) {
    if (n <= 0) return; // Base case
    cout << n << " ";   // Print the number
    printNum(n - 1);    // Recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printNum(n);
    return 0;
}
