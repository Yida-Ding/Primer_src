// strgback.cpp -- a function that returns a pointer to char
#include <iostream>

char * buildstr(char ch, int n);     // prototype

int main()
{
    using namespace std;
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;

    delete [] ps;                   // free memory
    ps = buildstr('+', 20);         // reuse pointer
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps;                   // free memory
    return 0;
}

// builds string made of n c characters
char * buildstr(char ch, int n)
{
    char * pn = new char [n + 1];
    pn[n] = '\0';
    for (int i = 0; i < n; i++){
        pn[i] = ch;        
    }
    return pn;
}
