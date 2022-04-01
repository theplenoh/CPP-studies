#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char myStr1[30] = "Hello";
    char* myStr2 = new char[30];

    strcpy(myStr2, " World");
    strcat(myStr1, myStr2);

    cout << myStr1 << endl;
    cout << "strlen(myStr1): " << strlen(myStr1) << endl;

    if(strcmp(myStr2, " World") == 0)
        cout << "myStr2 is \" World\"." << endl;

    return 0;
}
