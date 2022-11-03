#include <iostream>
using namespace std;

int sum1(int (*pr)[4], int n);
int sum2(int arr[][4], int n);

int main()
{
    int data[][4] = {{1,2,3,4}, {9,8,7,6}, {2,4,6,8}};
    int total1 = sum1(data, 3);
    int total2 = sum2(data, 3);
    cout << total1 << endl << total2 << endl;
    return 0;
}

int sum1(int (*pr)[4], int n)
{
    int sum_val = 0;
    for (int i = 0; i < n; i++, pr++){
        for (int j = 0; j < 4; j++){
            sum_val += *(*pr + j);
        }        
    }
    return sum_val;
}

int sum2(int arr[][4], int n)
{
    int sum_val = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 4; j++){
            sum_val += arr[i][j]; // *(*(arr+i)+j)
        }        
    }
    return sum_val;
}






