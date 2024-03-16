#include <iostream>
using namespace std;

void getTwoValues(int, int);
int getNextPrime(int);
int getPrevPrime(int);
bool isPrime(int);

void getTwoValues(int begin, int end){
    do{
        cout << "Please enter two values, make sure the first value is greater than the second: " << endl;
        cin >> begin >> end;
    } while (begin >= end);
}

int getNextPrime(int begin){
    int num = begin + 1;
    while (!isPrime(num)){
        num++;
    }
    return num;
}

int getPrevPrime(int end){
    int num = end - 1;
    while(!isPrime(num)){
        num--;
    }
    return num;
}

bool isPrime(int num){
    if (num <= 1) return 0;
    if (num <= 3) return 1;

    if (num % 2 == 0 || num % 3 == 0) return 0;

        for (int i = 5; i*i <= num; i = i+6)
            if ( num % i == 0 || num % (i+2) == 0)
            return 0;
        return 1;
}