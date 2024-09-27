#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    // Special case for handling 0, as reversing it still gives 0
    if (N == 0) {
        cout << "0" << endl;
        return 0;
    }

    // Extract digits from the integer N and store them in reverse order
    bool first = true;
    while (N > 0) {
        if (!first) {
            cout << " "; // Print space before printing next digit
        }
        cout << N % 10;  // Print the last digit
        N /= 10;         // Remove the last digit
        first = false;
    }
    cout << endl;

}
