/*
Print 1 to N using Backtracking
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

void printNum(int n) {
    if (n <= 0) return; // Base case
    printNum(n - 1);    // Recursive call
    cout << n << " ";   // Print the number
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printNum(n);
    return 0;
}
