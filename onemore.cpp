#include <iostream>

using namespace std;

// Function to reverse a number
int reverseNumber(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int main() {
    int num, rev, sum;

    // Input from user
    cout << "Enter a number: ";
    cin >> num;

    // Reverse the number
    rev = reverseNumber(num);

    // Calculate sum
    sum = num + rev;

    // Print result
    cout << "The sum of " << num << " and its reverse " << rev << " is: " << sum << endl;

    return 0;
}
