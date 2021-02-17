#include <iostream>
#include <utility>
#include <cmath>

double myAbs(double a)
{
    if (a < 0)
    {
        return -a;
    }
    else
    {
        return a;
    }
}

struct point2d
{
    double x;
    double y;
};

struct vector2d
{
    point2d a;
    point2d b;
};

double getTriangleArea(double a, double b, double c)
{
    int semiPerim = (a + b + c) / 2;
    return sqrt(semiPerim * (semiPerim - a) * (semiPerim - b) * (semiPerim - b));
}

double getVectorLength(vector2d a)
{
    double x = vector2d.b.x - vector2d.a.x;
    double y = vector2d.b.y - vector2d.a.y;

    return sqrt(pow(x, 2.0) + pow(y, 2.0));
}
 
int main()
{
    point2d point1 = { 3.0, 2.0 };
    point2d point2 = { 9.0, 2.0 };
    point2d point3 = { 7.0, 7.0 };

    std::cout << "Enter x and y of your point: ";

    point2d userPoint;
    std::cin >> userPoint.x >> userPoint.y;

    vecotr2d vector1 = { point1, point2 };
    vecotr2d vector2 = { point2, point3 };
    vecotr2d vector3 = { point3, point1 };

    double sideA = getVectorLength(vector1);
    double sideB = getVectorLength(vector2);
    double sideC = getVectorLength(vector3);

    double squareABC = getTriangleArea(sideA, sideB, sideC);

    vector2d innerVector1 = { point1, userPoint };
    vector2d innerVector1 = { point2, userPoint };
    vector2d innerVector1 = { point3, userPoint };

    double innerSideA = getVectorLength(innnerVector1);
    double innerSideB = getVectorLength(innnerVector2);
    double innerSideC = getVectorLength(innnerVector3);

    double squareSumm = getTriangleArea(sideA, innerSideA, innerSideB)
        + getTriangleArea(sideB, innerSideB, innerSideC) + getTriangleArea(sideC, innerSideC, innerSideA);

    if (squareSumm == squareABC)
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }

    return 0;
}