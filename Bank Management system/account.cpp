#include "account.h"

void Account::create_account()
{
    std::cout << "\nEnter customers data : " << total + 1;
    std::cout << "\nEnter account ID : ";
    std::cin >> person[total].account_ID;
    std::cout << "\nEnter account holder name : ";
    std::cin >> person[total].name;
    std::cout << "\nEnter contact number : ";
    std::cin >> person[total].contact;
    std::cout << "\nEnter address : ";
    std::cin >> person[total].address;
    std::cout << "\nEnter cash : ";
    std::cin >> person[total].cash;
    total++;
}

void Account::show_account()
{
    for (int i = 0; i < total; i++)
    {
        std::cout << "\nData of a person" << i + 1 << "\n";
        std::cout << "\nAccount ID : " << person[i].account_ID;
        std::cout << "\nAccount holder name : " << person[i].name;
        std::cout << "\nContact number : " << person[i].contact;
        std::cout << "\nAddress : " << person[i].address;
        std::cout << "\nCash : " << person[i].cash;
    }
}
