#include <iostream>
using namespace std;

int main() {
    int N, A, B;

    cin >> N >> A >> B;

    int totalSum = 0;

    for (int i = 1; i <= N; ++i) {
        int sumOfDigits = 0;
        int num = i;


        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }


        if (sumOfDigits >= A && sumOfDigits <= B) {
            totalSum += i;
        }
    }


    cout << totalSum << endl;
}
