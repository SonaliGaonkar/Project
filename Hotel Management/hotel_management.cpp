#include <iostream>
using namespace std;
class HotelManagement
{
public:
    int quantity;
    int choice;
    // availabilty of items
    float Qrooms = 10, Qpasta = 0, Qburger = 0;
    float Srooms = 0, Spasta = 0, Sburger = 0;

    float Trooms = 0, Tpasta = 0, Tburger = 0;

public:
    int availability()
    {
        std::cout << "\nEnter the availabe rooms in hotel.";
        std::cin >> Qrooms;
        std::cout << "\nEnter food Details.";
        std::cout << "\nEnter amount of burger available.";
        std::cin >> Qburger;
        std::cout << "\nEnter amount of pasta available.";
        std::cin >> Qpasta;
    }
};
class Customer : public HotelManagement
{
public:
    void rooms()
    {
        std::cout << "\nEnter number of rooms you want to book : ";
        std::cin >> quantity;
        if (Qrooms >= quantity)
        {
            std::cout << quantity << " rooms are alloted to you.";
            Trooms = quantity * 1200;
            std::cout << "\nTotal cost for " << quantity << " rooms is : " << Trooms;
        }
        else
        {
            std::cout << "\nOnly" << Qrooms - quantity << "are available";
        }
    }
    void foodServices()
    {
        std::cout << "Below is list of available food items.";
        std::cout << "\n1. Burger.";
        std::cout << "\n2. Pasta.";
        std::cout << "\n3. Sandwich.";
        std::cout << "\n4. Frenchfries.";
        std::cout << "\n5. Noodles .";
        std::cout << "\nEnter your choice";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
        }
    }
};
int main()
{
    int choice, quantity;

    std::cout << "\n1. Customer Services";
    std::cout << "\n2. Admin Login.";
    std::cout << "\n3. Exit";
    HotelManagement h;
    Customer c;
    std::cout << "\nEnter your choice";
    std::cin >> choice;

    switch (choice)
    {
    case 1:

        c.rooms();
        break;
    case 2:
        h.availability();
        return 0;
    }
}