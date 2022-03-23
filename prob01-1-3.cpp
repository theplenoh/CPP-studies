#include <iostream>

int main(void)
{
    int n;

    std::cout<<"구구단 단수: ";
    std::cin>>n;

    for(int i=1; i<10; i++)
    {
        std::cout<<n<<" * "<<i<<" = "<<n*i<<std::endl;
    }

    return 0;
}
