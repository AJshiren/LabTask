#include<bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
  cout << "Prime numbers between 1 and 100 are:\n";
    
    for (int num = 2; num <= 100; ++num) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }

    return 0;
}
