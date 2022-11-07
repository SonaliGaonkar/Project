#include <iostream>
#include "hotel_management.h"

int HotelManagement::availability()
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

void Customer::rooms()
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
int Customer::foodServices()
{

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
