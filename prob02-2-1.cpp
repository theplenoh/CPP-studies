#include <iostream>
using namespace std;

int main()
{
    const int num = 12;
    const int* pNum = &num;

    const int* &refPNum = pNum;

    cout << *pNum << endl;
    cout << *refPNum << endl;

    return 0;
}
