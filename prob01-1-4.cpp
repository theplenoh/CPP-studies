#include <iostream>

int main(void)
{
    const double ratio = 0.12;
    const int basic = 50;
    int sales;

    while(true)
    {
        std::cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin>>sales;
        if(sales == -1)
        {
            std::cout<<"프로그램을 종료합니다."<<std::endl;
            break;
        }
        std::cout<<"이번 달 급여: "<<basic + sales*ratio<<"만원"<<std::endl;
    }

    return 0;
}
