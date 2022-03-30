#include <iostream>
using namespace std;

int main()
{
    const int num = 12;

    const int* nPtr = &num;

    const int* &refPtr = nPtr;

    cout << *nPtr << endl;
    cout << *refPtr << endl;

    return 0;
}
