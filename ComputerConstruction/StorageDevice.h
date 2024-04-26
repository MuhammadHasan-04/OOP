#include <iostream>
#include <string>
using namespace std;

class StorageDevice
{
private:
    string type;
    int capacity;
    double price;

public:
    StorageDevice() : type(""), capacity(0), price(0) {}
    StorageDevice(const string &t, int c, double p) : type(t), capacity(c), price(p) {}

    void set_price(double p) { this->price = p; }
    void set_capacity(int c) { this->capacity = c; }
    void set_type(string t) { this->type = t; }

    int get_capacity() { return this->capacity; }
    double get_price() { return this->price; }
    string get_type() { return this->type; }
};
