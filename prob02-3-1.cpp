#include <iostream>
using namespace std;

typedef struct _Point
{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2);

int main()
{
    Point *point1 = new Point;
    Point *point2 = new Point;
    point1->xpos = 3;
    point1->ypos = 10;

    point2->xpos = 6;
    point2->ypos = 10;

    Point &result = PntAdder(*point1, *point2);

    cout<<"["<<result.xpos<<", "<<result.ypos<<"]"<<endl;

    delete point1;
    delete point2;
    delete &result;

    return 0;
}

Point& PntAdder(const Point &p1, const Point &p2)
{
    Point* pntSum = new Point;

    pntSum->xpos = (p1).xpos + (p2).xpos;
    pntSum->ypos = (p1).ypos + (p2).ypos;

    return *pntSum;
}
