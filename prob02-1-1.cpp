#include <iostream>
using namespace std;

void Increment(int &num)
{
    num++;
}

void Negate(int &num)
{
    num *= -1;
}

int main()
{
    int numA = 4;
    int numB = 6;

    Increment(numA);
    Negate(numB);

    cout<<numA<<endl;
    cout<<numB<<endl;

    return 0;
}
