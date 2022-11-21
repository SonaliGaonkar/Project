#include "account.cpp"

int choice;
void customerschoice()
{
    std::cout << "1. Create account"
              << "\n";
    std::cout << "2. View customers list"
              << "\n";
    std::cout << "3. Update information of existing account"
              << "\n";
    std::cout << "4. Check details of existing account"
              << "\n";
    std::cout << "5. Transactions"
              << "\n";
    std::cout << "6. Remove account"
              << "\n";
    std::cout << "7. Exit"
              << "\n\n";

    std::cout << "Enter the operation you want to perform : ";
    std::cin >> choice;
}
int main()
{
    Account a;
    customerschoice();
    switch (choice)
    {
    case 1:

        a.create_account();
        customerschoice();
        break;
    case 2:
        a.show_account();
        break;
    }
}
