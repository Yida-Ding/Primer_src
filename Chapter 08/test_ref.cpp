#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    int var1 = 999;
    int & var2 = var1;
    int * const pvar = &var1;
    cout << pvar << endl;
    cout << &var2 << endl;

    return 0;
}