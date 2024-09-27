#include <iostream>
using namespace std;

int main() {

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        // Ascending part
        for (int j = 1; j <= n - i; j++) {
            cout << j;
        }

        // Spaces in between
        for (int j = 0; j < i * 2; j++) {
            cout << " ";
        }

        // Descending part
        for (int j = n - i; j >= 1; j--) {
            cout << j;
        }


        cout << endl;
    }


}
