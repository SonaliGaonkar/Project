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
        std::cout << "\n available rooms in hotel are : " << Qrooms;
        ;
        std::cout << "\n food Details.";
        std::cout << "\n amount of burger available : " << Qburger;
        std::cout << "\n amount of pasta available : " << Qpasta;
        std::cout << "\n amount of sandwich available : " << Qsandwich;
        std::cout << "\n amount of frenchfries available : " << Qfrenchfries;
        std::cout << "\n amount of noodles available : " << Qnoodles;
    }
};
class Customer : public HotelManagement
{
private:
    // TOTAL COST
    float Trooms = 0, Tpasta = 0, Tburger = 0, Tsandwich = 0, Tfrenchfries = 0, Tnoodles = 0;
    int quantity;
    int choice, c;

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
            std::cout << "\nWould you like to order food (1 = yes | 0 = no) : ";
            std::cin >> c;
            if (c == 1)
            {
                foodServices();
            }
            else
                std::cout << "Total cost of room is : " << Trooms;
                std::cout << "\n\n*****************THANK YOU VISIT AGAIN****************";
            return;
        }
        else
        {
            std::cout << "\nOnly" << Qrooms - quantity << "are available";
        }
    }
    void foodServices()
    {
        int b;
        std::cout << "\n\nBelow is list of available food items.";
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
                Tpasta = quantity * 60;
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
        case 3:
            std::cout << "\nEnter number of sandwich you want to order : ";
            std::cin >> quantity;
            if (Qsandwich >= quantity)
            {
                std::cout << quantity << " sandwich are available, collect your order from counter.";
                Tsandwich = quantity * 40;
                std::cout << "\nTotal cost for " << quantity << " sandwich is : " << Tsandwich;
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
                std::cout << "\nOnly" << Qsandwich - quantity << "are available";
            }
        case 4:
            std::cout << "\nEnter number of frenchfries you want to order : ";
            std::cin >> quantity;
            if (Qfrenchfries >= quantity)
            {
                std::cout << quantity << " frenchfries are available, collect your order from counter.";
                Tfrenchfries = quantity * 30;
                std::cout << "\nTotal cost for " << quantity << " frenchfries is : " << Tfrenchfries;
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
                std::cout << "\nOnly" << Qfrenchfries - quantity << "are available";
            }
        case 5:
            std::cout << "\nEnter number of noodles you want to order : ";
            std::cin >> quantity;
            if (Qnoodles >= quantity)
            {
                std::cout << quantity << " noodles are available, collect your order from counter.";
                Tnoodles = quantity * 60;
                std::cout << "\nTotal cost for " << quantity << " noodles is : " << Tnoodles;
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
                std::cout << "\nOnly" << Qnoodles - quantity << "are available";
            }
        }
    }
};
int main()
{
    int a, q, d;
    std::cout << "*******WELCOME******** ";
    std::cout << "\n1. Check Availability";
    std::cout << "\n2. Customer Services.";
    std::cout << "\n3. Exit";
    HotelManagement h;
    Customer c;
    std::cout << "\nEnter your choice : ";
    std::cin >> a;

    switch (a)
    {
    case 1:
        h.availability();
        std::cout << "\nWould you like to book room or order food (1 = yes | 0 = no): ";
        std::cin >> d;
        {
            if (d == 0)
            {
                break;
            }
        }
    case 2:
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

    case 3:
        return 0;
    }
    return 0;
}