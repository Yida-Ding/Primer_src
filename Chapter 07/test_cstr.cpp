#include <iostream>
#include <cstring>
using namespace std;

void print_char(const char *arr);

int main()
{
    char arr[] = "hiyida";
    const char *pc = "hiyida";
    const char *pca[] = {"hiyida", "hiheyun"};
    print_char(arr);
    print_char(pc);
    return 0;
}

void print_char(const char *arr)
{
    cout << arr << endl;
}







