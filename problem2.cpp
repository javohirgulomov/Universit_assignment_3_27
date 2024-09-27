#include <iostream>
using namespace std;

int main() {

    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        // Special case for handling 0, as reversing it still gives 0
        if (N == 0) {
            cout << "0" << endl;
            continue;
        }

        // To handle the output of digits
        int reversed[10]; // Array to store digits (up to 10 digits for a 32-bit int)
        int count = 0;

        // Extract digits
        while (N > 0) {
            reversed[count++] = N % 10; // Store last digit
            N /= 10; // Remove last digit
        }

        // Print digits in reverse order
        for (int i = 0; i < count; i++) {
            cout << reversed[i]; // Print the digit
            if (i < count - 1) {
                cout << " "; // Add space between digits except after the last one
            }
        }
        cout << endl; // Newline after each test case
    }

}
