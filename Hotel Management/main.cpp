#include <iostream>
#include "hotel_management.h"
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