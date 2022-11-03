#include <iostream>
#include <cmath>
using namespace std;

struct rect
{
    double x;
    double y;
};

struct polar
{
    double dis;
    double ang;
};

void rect2polar(const rect *pr, polar *pp);
void show_polar(const polar *pp);

int main()
{
    rect rect_coord;
    polar polar_coord;
    cout << "enter rect coordinate: ";
    while (cin >> rect_coord.x >> rect_coord.y){
        rect2polar(&rect_coord, &polar_coord);
        show_polar(&polar_coord);
        cout << "enter rect coordinate: ";
    }
    return 0;
}

void rect2polar(const rect *pr, polar *pp)
{
    pp->dis = sqrt(pow(pr->x, 2) + pow(pr->y, 2));
    pp->ang = atan2(pr->y, pr->x);
}

void show_polar(const polar *pp)
{
    const double scale = 180 / M_PI;
    cout << "distance = " << pp->dis << endl
         << "angle = " << pp->ang * scale << endl; 
}






