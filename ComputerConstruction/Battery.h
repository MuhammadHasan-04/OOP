#include <iostream>
#include <string>
using namespace std;

class Battery
{
private:
    int capacity;
    double price;

public:
    Battery() : capacity(0), price(0) {}
    Battery(int c, double p) : capacity(c), price(p) {}

    void set_capacity(int c) { this->capacity = c; }
    void set_price(double p) { this->price = p; }

    int get_capacity() { return this->capacity; }
    double get_Price() { return this->price; }
};
