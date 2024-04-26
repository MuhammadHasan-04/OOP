#include <iostream>
#include <string>
using namespace std;

class CU
{
private:
    float clock;

public:
    CU() : clock(0) {}
    CU(float x) : clock(x) {}

    void set_clock(float c) { this->clock = c; }
    float get_clock() { return this->clock; }
};