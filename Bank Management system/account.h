#include <iostream>

class Account
{
private:
    int total;
    struct person
    {
        int account_ID;
        std::string name;
        std::string address;
        int contact;
        int cash;
    } person[100];

public:
    Account()
    {
        total = 0;
    }
    void create_account();
    void show_account();
};