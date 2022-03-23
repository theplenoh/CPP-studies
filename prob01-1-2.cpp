#include <iostream>

int main()
{
    char name[50];
    char number[50];

    std::cout << "이름: ";
    std::cin >> name;
    std::cout << "전화번호: ";
    std::cin >> number;

    std::cout << std::endl;

    std::cout << name << " " << number << std::endl;

    return 0;
}
