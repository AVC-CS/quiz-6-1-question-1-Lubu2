#include <iostream>
using namespace std;

void getTwoValues(int&, int&);
int getNextPrime(int);
int getPrevPrime(int);
bool isPrime(int);

// void getTwoValues(int begin, int end){
void getTwoValues(int &begin, int &end){
    do {
        cout << "Enter two values, the first must be greater than the second: " << endl;
        cin >> begin >> end;

        if (begin < end){
            cout << "Reinput valid values: " << endl;
        }
    } while (begin > end);

    begin = begin;
    end = end;
}

int getNextPrime(int begin){
    if (begin <= 1)
    return 2;

    int prime = begin;
    bool found = false;

    while(!found) {
        prime++;
        if (isPrime(prime))
        found = true;
    }
    return prime;
}

int getPrevPrime(int end){
    int num = end - 1;
    while(!isPrime(num)){
        num--;
    }
    return num;
}

bool isPrime(int num){
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

        for (int i = 5; i*i <= num; i = i+6)
            if ( num % i == 0 || num % (i+2) == 0)
            return false;
        return true;
}
