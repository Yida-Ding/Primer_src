//arrobj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>
using namespace std;

const int Seasons = 4;
const array<string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill(array<double, Seasons> *pa);
void show(const array<double, Seasons> *pa);

int main()
{
    array<double, 4> expenses;
    fill(&expenses);
    show(&expenses);
    return 0;
}

void fill(array<double, Seasons> *pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}

void show(const array<double, Seasons> *pa)
{
    double sum_cost = 0;
    for (int i = 0; i < Seasons; i++){
        cout << Snames[i] << ": " << (*pa)[i] << endl;
        sum_cost += (*pa)[i];
    }
    cout << sum_cost << endl;
}



