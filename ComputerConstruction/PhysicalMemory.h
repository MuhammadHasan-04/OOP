#include <iostream>
#include <string>
using namespace std;

#include "StorageDevice.h"

class PhysicalMemory
{
private:
    int capacity;
    StorageDevice *S;

public:
    PhysicalMemory() : capacity(0), S(nullptr) {}
    PhysicalMemory(int c) : capacity(c), S(new StorageDevice) {}

    void set_capacity(int c) { this->capacity = c; }
    int get_capacity() { return this->capacity; }
    StorageDevice &get_Storage() { return *S; }
};

class DDRMemory : public PhysicalMemory
{
public:
    PhysicalMemory p;
    DDRMemory(int c) : PhysicalMemory(c)
    {
        get_Storage().set_type("DDR4/5");
        get_Storage().set_price(100);
    }
};

class LPDDRMemory : public PhysicalMemory
{
public:
    LPDDRMemory(int c) : PhysicalMemory(c)
    {
        get_Storage().set_type("LPDDR4/5");
        get_Storage().set_price(150);
    }
};