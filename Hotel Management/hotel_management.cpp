#include <iostream>
using namespace std;
class HotelManagement
{
public:
    // availabilty of items
    float Qrooms = 10, Qpasta = 10, Qburger = 10, Qsandwich = 10, Qfrenchfries = 10, Qnoodles = 10;

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
private:
    // TOTAL COST
    float Trooms, Tpasta, Tburger, Tsandwich, Tfrenchfries, Tnoodles;
    int quantity;
    int choice;

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
        int b;
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
                std::cout << "\nWould you like to order anything else (1 = yes | 0 = no) : ";
                std::cin >> b;
                if (b == 1)
                {
                    foodServices();
                }
                else
                {
                    std::cout << "\n Your total bill is : " << Tburger + Tpasta + Tsandwich + Tfrenchfries + Tnoodles;
                    std::cout << "\n\n*****************THANK YOU VISIT AGAIN****************";
                    return;
                }
            }
            else
            {
                std::cout << "\nOnly" << Qburger - quantity << "are available";
            }
        case 2:
            std::cout << "\nEnter number of Pasta you want to order : ";
            std::cin >> quantity;
            if (Qpasta >= quantity)
            {
                std::cout << quantity << " Pasta are available, collect your order from counter.";
                Tpasta = quantity * 50;
                std::cout << "\nTotal cost for " << quantity << " Pasta is : " << Tpasta;
                std::cout << "\nWould you like to order anything else (1 = yes | 0 = no) : ";
                std::cin >> b;
                if (b == 1)
                {
                    foodServices();
                }
                else
                {
                    std::cout << "\n Your total bill is : " << Tburger + Tpasta + Tsandwich + Tfrenchfries + Tnoodles;
                    std::cout << "\n\n*****************THANK YOU VISIT AGAIN****************";
                    return;
                }
            }
            else
            {
                std::cout << "\nOnly" << Qpasta - quantity << "are available";
            }
        }
    }
};
int main()
{
    int a, q;
    std::cout << "*******WELCOME******** ";
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