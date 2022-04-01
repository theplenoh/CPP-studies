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
    int num = 4;
    cout << num << endl;

    Increment(num);
    cout << "After `Increment(num)`: " << num << endl;

    Negate(num);
    cout << "After `Negate(num)`: " << num << endl;

    return 0;
}
