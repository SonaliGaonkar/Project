#include "account.h"

void account::create_account()
{
    std::cout << "Enter account number : ";
    std::cin >> account_num;
    std::cout << "Enter account holder name : ";
    std::cin >> name;
}

void account::show_account()
{
    std::cout << "\nAccount number : " << account_num;
    std::cout << "\nAccount holder name : " << name;
}
