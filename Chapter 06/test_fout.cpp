#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int fibo(int n);

int main()
{
    ofstream fout;
    fout.open("data/hello_world.txt");
    for (int i = 1; i < 30; i++){
        fout << fibo(i) << endl;        
    }
    fout.close();
    return 0;
}

int fibo(int n)
{
    if (n == 1 || n == 2){
        return 1;
    }
    else{
        return fibo(n - 1) + fibo(n - 2);
    }
}



