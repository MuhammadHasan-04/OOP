#include <iostream>
using namespace std;
#include "StorageDevice.h"

// Inherited HDD in the Storage Device
class HDD : public StorageDevice
{
public:
    HDD(int c) : StorageDevice("HDD", c, 100) {}
};
