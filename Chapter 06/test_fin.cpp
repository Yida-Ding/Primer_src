#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("data/hello_world.txt");

    double score;
    while (fin >> score){
        cout << score << endl;
    }

    return 0;
}