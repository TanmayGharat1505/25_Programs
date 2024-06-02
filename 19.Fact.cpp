// Calculate the sum of series 1/1! + 2/2! + 3/3! + ... + N/N! using nested loops.
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a value for N: ";
    cin >> N;

    double totalSum = 0; // We use double to handle fractions

    for (int i = 1; i <= N; i++) {
        double term = 1.0; // Start with 1.0

        for (int j = 1; j <= i; j++) {
            term *= j; // Calculate the factorial
        }
      totalSum +=i / term;
    }

    cout << "The sum of the series is: " << totalSum << endl;

    return 0;
}