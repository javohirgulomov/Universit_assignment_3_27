#include <iostream>
using namespace std;

int main() {

    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int N;
        cin >> N;


        if (N == 0) {
            cout << "0" << endl;
            continue;
        }

        bool first = true;

        while (N > 0) {
            int digit = N % 10;
            if (!first) {
                cout << " ";
            }
            cout << digit;
            N /= 10;
            first = false;
        }

        cout << " " << endl;
    }
}
