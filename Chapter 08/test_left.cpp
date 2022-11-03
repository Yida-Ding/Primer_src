#include <iostream>
#include <cstring>
using namespace std;

const int SLEN = 100;

char * print_left(const char *arr, int n = 1);

int main()
{
    char arr[SLEN];
    cout << "Enter string:" << endl;
    cin.get(arr, SLEN);

    // retrieve four characters
    char *pleft = print_left(arr, 4);
    cout << pleft << endl;
    delete [] pleft;

    // retrieve one (by default) character
    char *p = print_left(arr);
    cout << p << endl;
    delete [] p;

    return 0;
}

char * print_left(const char *arr, int n)
{
    int arr_len = strlen(arr);
    n = (arr_len > n) ? n : arr_len;
    char *pleft = new char [n+1];
    for (int i = 0; i < n; i++){
        pleft[i] = arr[i];        
    }
    pleft[n] = '\0';
    return pleft;
}
