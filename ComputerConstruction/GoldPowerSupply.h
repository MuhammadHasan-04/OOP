#include <iostream>
using namespace std;
#include "PowerSupply.h"

// inherited PoweRSupply Type

class GoldPowerSupply : public PowerSupply
{
public:
    GoldPowerSupply(int w) : PowerSupply(w, "80 Plus Gold", 100) {}
};
