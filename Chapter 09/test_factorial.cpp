#include <iostream>
#include <cstring>
using namespace std;

int factorial(int n);
const int n = 5;

int main()
{
    for (int i = 1; i < n; i++){
        cout << factorial(i) << endl;        
    }    
    
    return 0;
}

int factorial(int n)
{
    static int fact = 1;
    fact = fact * n;
    return fact;    
}



