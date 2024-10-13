#include <iostream>
#include "Point3D.h"
using namespace std;
int main()
{
    cout << "Objects amount at start: " << Point3D::GetCount() << endl;
    Point3D p1;
    cout << "Enter p1: \n";
    p1.Input();
    cout << "Objects aomunt amount after p1 realization: " << Point3D::GetCount() << endl;
    Point3D p2(1, 2, 3);
    cout << "Enter p2: \n";
    p2.Input();
    cout << "Objects aomunt amount after p2 realization: " << Point3D::GetCount() << endl;
    Point3D p3;
    p3.Init(4, 5, 6);
    cout << "Enter p3: \n";
    p3.Input();
    cout << "Objects aomunt amount after p3 realization and initialization: " << Point3D::GetCount() << endl;
    Point3D p4(7, 8, 9);
    cout << "Objects aomunt amount after p4 realization: " << Point3D::GetCount() << endl;
    cout << "Objects aomunt amount after deleting p4: " << Point3D::GetCount() << endl;
    return 0;
}