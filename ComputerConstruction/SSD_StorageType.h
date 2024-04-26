#include <iostream>
using namespace std;
#include "StorageDevice.h"

// Inherited ssD in the Storage Device

class SSD : public StorageDevice
{
public:
    SSD(int c) : StorageDevice("SSD", c, 150) {}
};
