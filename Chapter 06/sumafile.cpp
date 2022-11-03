// sumafile.cpp -- functions with an array argument
#include <iostream>
#include <fstream>          // file I/O support
#include <cstdlib>          // support for exit()


const int SIZE = 60;
int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream fin;        // object for handling file input

    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    fin.open(filename);  // associate inFile with a file
    if (!fin.is_open())  // failed to open file
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    
    double value;
    double sum = 0.0;
    int count = 0;          // number of items read

    // fin >> value;        // get first value
    // while (fin.good())   // while input good and not at EOF
    // {
    //     ++count;            // one more item read
    //     sum += value;       // calculate running total
    //     fin >> value;    // get next value
    // }

    while (fin >> value){   // return of expr is fin, bool(fin) == fin.good()
        ++count;
        sum += value; 
    }

    if (fin.eof())
        cout << "End of file reached.\n";
    else if (fin.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";
    
    if (count == 0)
        cout << "No data processed.\n";
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    fin.close();         // finished with the file
    return 0;
}
