#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    cout << typeid("abc").name() << endl;

    string abc = "abc";


    return 0;
}