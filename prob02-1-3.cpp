#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void SwapPointer(int* a, int* b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1=5;
    int* ptr1=&num1;
    int num2=10;
    int* ptr2=&num2;

    SwapPointer(ptr1, ptr2);

    cout<<num1<<endl;
    cout<<num2<<endl;

    return 0;
}
