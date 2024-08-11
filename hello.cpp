#include <iostream>
using namespace std;

bool isPrime(int N)
{

    // If the number is less than or equal to 1, it is not
    // prime
    if (N <= 1)
    {
        return false;
    }

    // Check for divisors from 2 to N-1
    for (int i = 2; i < N; i++)
    {

        // If N is divisible by any number in this range, it
        // is not prime
        if (N % i == 0)
        {
            return false;
        }
    }

    // If no divisors are found, it is prime
    return true;
}

int main()
{

    int N = 10;
    cout << "Is " << N << " prime?" << endl;

    if (isPrime(N))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
