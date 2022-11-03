// fun_ptr.cpp -- pointers to functions
#include <iostream>
using namespace std;

double betsy(int lns);
double pam(int lns);
void estimate(int lines, double (*pf)(int lns));

int main()
{
    int code;
    cout << "How many lines of code do you need? ";
    cin >> code;
    cout << "Here's Betsy's estimate:\n";
    estimate(code, betsy);  // the function name is its address
    cout << "Here's Pam's estimate:\n";
    estimate(code, pam);
    return 0;
}

void estimate(int lines, double (*pf)(int lns))
{

    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hour(s)\n";
}

double betsy(int lns)
{
    return 0.05 * lns;
}

double pam(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}

