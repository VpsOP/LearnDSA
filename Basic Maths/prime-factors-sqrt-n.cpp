#include <bits/stdc++.h>
using namespace std;

// Step1: Make it a odd number.
// Step2: Check divisibility from 3->sqrt(N) while increasing the counter by 2 as we can skip checking for even numbers.
// Step3: At last we check for special condition when n is itself a prime number.


// Vector to hold the factors;
vector<int> factors;
void printVector(vector<int> vec);


int main()
{
    // The number whose prime factors we need to find
    int n;
    cin >> n;

    // Step1: Make it a odd number.
    while(n%2 == 0){
        n /= 2;
        factors.push_back(2);
    }

    // Step2: Check divisibility from 3->sqrt(N) while increasing the counter by 2 as we can skip checking for even numbers.
    for(int i=3; i*i<=n; i += 2){
        while (n%i ==0)
        {
            factors.push_back(i);
            n /=i;
        }
    }

    // Step3: At last we check for special condition when n is itself a prime number.
    if(n>2){
        factors.push_back(n);
    }

    printVector(factors);
    return 0;
}

// Function to print the vector.
void printVector(vector<int> vec)
{
    for (auto i = vec.begin(); i != vec.end(); ++i)
        cout << *i << " ";
}