class HotelManagement
{
public:
    // availabilty of items
    float Qrooms = 10, Qpasta = 10, Qburger = 10, Qsandwich = 10, Qfrenchfries = 10, Qnoodles = 10;

public:
    int availability();
};
class Customer : public HotelManagement
{
private:
    // TOTAL COST
    float Trooms = 0, Tpasta = 0, Tburger = 0, Tsandwich = 0, Tfrenchfries = 0, Tnoodles = 0;
    int quantity;
    int choice, c,b;

public:
    void rooms();
    int foodServices();
    
};