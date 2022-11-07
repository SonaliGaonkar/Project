#include <iostream>
using namespace std;
class HotelManagement
{
public:
    int quantity;
    int choice;
    // availabilty of items
    float Qrooms = 10, Qpasta = 0, Qburger = 10;
    float Srooms = 0, Spasta = 0, Sburger = 0;

    float Trooms = 0, Tpasta = 0, Tburger = 0;

public:
    int availability()
    {
        std::cout << "\nEnter the available rooms in hotel.";
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
        std::cout << "\n1. Burger       -Rs 50.";
        std::cout << "\n2. Pasta        -Rs 60.";
        std::cout << "\n3. Sandwich     -Rs 40. ";
        std::cout << "\n4. Frenchfries  -Rs 30.";
        std::cout << "\n5. Noodles      -Rs 60.";
        std::cout << "\nEnter your choice : ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            std::cout << "\nEnter number of Burger you want to order : ";
            std::cin >> quantity;
            if (Qburger >= quantity)
            {
                std::cout << quantity << " burgers are available, collect your order from counter.";
                Tburger = quantity * 50;
                std::cout << "\nTotal cost for " << quantity << " burger is : " << Tburger;
            }
            else
            {
                std::cout << "\nOnly" << Qburger - quantity << "are available";
            }
        }
    }
};
int main()
{
    int a, q;

    std::cout << "\n1. Customer Services";
    std::cout << "\n2. Admin Login.";
    std::cout << "\n3. Exit";
    HotelManagement h;
    Customer c;
    std::cout << "\nEnter your choice : ";
    std::cin >> a;

    switch (a)
    {
    case 1:
        std::cout << "\nSelect services. ";
        std::cout << "\n1. Room Booking. ";
        std::cout << "\n2. Food ordering. ";
        std::cout << "\nEnter your choice : ";
        std::cin >> q;
        switch (q)
        {
        case 1:
            c.rooms();
            break;
        case 2:
            c.foodServices();
            break;
        }
        break;
    case 2:
        h.availability();
        return 0;
    }
}