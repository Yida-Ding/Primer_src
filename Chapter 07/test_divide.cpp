#include <iostream>
using namespace std;

const int LEN = 66;
const int DIV = 6;

void init_ruler(char *pr);
void divide_ruler(char *pr, int st, int ed, int n);

int main()
{
    char ruler[LEN];

    for (int i = 0; i < DIV; i++){
        init_ruler(ruler);
        divide_ruler(ruler, 0, LEN - 2, i);
        cout << ruler << endl;
    }
    return 0;
}

void init_ruler(char *pr)
{
    pr[LEN - 1] = '\0';
    pr[0] = pr[LEN - 2] = '|';
    for (int i = 1; i < LEN - 2; i++){
        pr[i] = ' ';  
    }
}

void divide_ruler(char *pr, int st, int ed, int n)
{
    if (n == 0)
        return;
    else
    {
        int mi = (st + ed) / 2;
        pr[mi] = '|';
        divide_ruler(pr, st, mi, n - 1);
        divide_ruler(pr, mi, ed, n - 1);
        return;
    }
}



