#include<iostream>
using namespace std;

int isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}

void findfactors(int n){
    cout<<"Factors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int nextPrime(int n) {
    int next = n + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
        int next = nextPrime(n);
        cout << "The next prime number greater than " << n << " is " << next << "." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
        findfactors(n);
    }

    return 0;
}