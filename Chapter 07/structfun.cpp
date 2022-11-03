// strctfun.cpp -- functions with a structure argument
#include <iostream>
#include <cmath>
using namespace std;

struct polar
{
    double distance;      // distance from origin
    double angle;         // direction from origin
};

struct rect
{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}

// convert rectangular to polar coordinates
polar rect_to_polar(rect rplace)
{
    polar pplace;
    pplace.distance = sqrt(pow(rplace.x, 2) + pow(rplace.y, 2));
    pplace.angle = atan2(rplace.y, rplace.x);
    return pplace;
}

// show polar coordinates, converting angle to degrees
void show_polar (polar dapos)
{

    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n";
}
