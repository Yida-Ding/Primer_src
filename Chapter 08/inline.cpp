// inline.cpp -- using an inline function
#include <iostream>
#include <ctime>
using namespace std;

const double N = 5000000000;

inline double square_inline(double x)
{ 
    return x * x; 
}

double square_normal(double x)
{ 
    return x * x; 
}

int main()
{
    double a, b;
    double sum_inline = 0, sum_normal = 0;

    time_t start, t_inl, t_nor;
    start = time(NULL);

    for (double i = 0; i < N; i++){
        sum_inline += square_inline(i);
    }
    t_inl = time(NULL);

    for (double i = 0; i < N; i++){
        sum_normal += square_normal(i);
    }
    t_nor = time(NULL);

    cout << t_inl-start << endl;
    cout << t_nor-t_inl << endl;

    return 0;  
}
