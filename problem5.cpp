#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    int count = 0;
    int currentNum = 1;
    int result = 0;

    while (count < N) {

        if (currentNum % 3 != 0 && currentNum % 10 != 3) {
            count++;
            result = currentNum;
        }
        currentNum++;
    }


    cout << "The number at position " << N << " is: " << result << endl;
}
