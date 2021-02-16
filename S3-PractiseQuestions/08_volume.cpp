#include <iostream>
#include <math.h>
using namespace std;

float volume(int s) // cube
{
    return s * s * s;
}
float volume(float r, float h) // cylinder
{
    return M_PI * r * r * h;
}
float volume(float r) // sphere
{
    return M_PI * r * r * r;
}
float volume(float l, float b, float h) // cuboid
{
    return l * b * h;
}

int main()
{
    int chosen, s;
    float l, b, h, r;
    bool online = true;
    while (online)
    {
        cout << "\n_______________________________\n";
        cout << "\nSelect your choice : \n";
        cout << "\n1. Cube \t2. Cylinder \n3. Sphere \t4. Cuboid \n5. Exit \n\n\t: ";
        cin >> chosen;
        switch (chosen)
        {
        case 1:
            cout << "\nEnter side of cube : ";
            cin >> s;
            cout << "The volume of cube is " << volume(s);
            break;
        case 2:
            cout << "\nEnter raduis of cylinder : ";
            cin >> r;
            cout << "Enter height of cylinder : ";
            cin >> h;
            cout << "The volume of cylinder is " << volume(r, h);
            break;
        case 3:
            cout << "\nEnter radius of sphere : ";
            cin >> r;
            cout << "The volume of sphere is " << volume(r);
            break;
        case 4:
            cout << "\nEnter length of cuboid : ";
            cin >> l;
            cout << "Enter breadth of cuboid : ";
            cin >> b;
            cout << "Enter height of cuboid : ";
            cin >> h;
            cout << "The volume of cuboid is " << volume(l, b, h);
            break;
        case 5:
            online = false;
            break;

        default:
            online = false;
            break;
        }
    }
    return 0;
}
