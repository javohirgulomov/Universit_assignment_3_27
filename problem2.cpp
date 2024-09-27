#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        // Process the digits of the number from right to left
        while (N > 0) {
            cout << N % 10; // Print the last digit
            N /= 10; // Remove the last digit
            if (N > 0) {
                cout << " "; // Print space after each digit except the last one
            }
        }

        cout << endl; // Move to the next line after each test case
    }
}
