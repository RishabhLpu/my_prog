#include <iostream>
using namespace std;

const float PI = 3.1415;
class Shape
{
public:
    double area(double radius)
    {
        return PI * radius * radius;
    }

    void area(float length, float breadth)
    {
        float result = length * breadth;
        cout << result << endl;
    }
    int area()
    {
        float base = 5.0;
        float heigth = 6.0;
        float result2 = 1 / 2 * (base * heigth);
        cout << result2 << endl;
        return 0;
    }
};

int main()
{
    Shape S;

    double circleRadius = 5.0;
    double circleArea = S.area(circleRadius);
    cout << "Area of circle: " << circleArea << endl;

    float rectangleLength = 4.0;
    float rectangleBreadth = 6.0;
    cout << "Area of rectangle: ";
    S.area(rectangleLength, rectangleBreadth);
    float trianglebase = 3.0;
    float triangleheigth = 5.0;
    cout << "Area of triangle: ";
    S.area(trianglebase, triangleheigth);

    return 0;
}
