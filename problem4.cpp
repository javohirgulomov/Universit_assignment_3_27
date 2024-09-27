#include <iostream>
using namespace std;

int main() {
    int n, x;

    cin >> n >> x;

    if (n <= 2) {
        cout << 1 << endl;
    }
    else {

        int floorNumber = 1 + (n - 2 + x - 1) / x;
        cout << floorNumber << endl;
    }
}
