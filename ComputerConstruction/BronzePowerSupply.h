#include <iostream>
using namespace std;
#include "PowerSupply.h"

// inherited PoweRSupply Type
class BronzePowerSupply : public PowerSupply
{
public:
    BronzePowerSupply(int w) : PowerSupply(w, "80 Plus Bronze", 50) {}
};
