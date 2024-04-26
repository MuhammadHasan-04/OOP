#include <iostream>
#include <string>
using namespace std;

#include "MainMemory.h"
#include "Port.h"
#include "NetworkCard.h"
#include "PowerSupply.h"
#include "Battery.h"
#include "GraphicsCard.h"

class MotherBoard
{
private:
    MainMemory *mm;
    Port ports[4];
    GraphicsCard *gpuPtr;
    NetworkCard *networkCardPtr;
    PowerSupply *powerSupplyPtr;
    Battery *batteryPtr;

public:
    MotherBoard(MainMemory *mmObj, Port portsObj[], GraphicsCard *gpu, NetworkCard *networkCard, PowerSupply *powerSupply, Battery *battery)
        : mm(mmObj), gpuPtr(gpu), networkCardPtr(networkCard), powerSupplyPtr(powerSupply), batteryPtr(battery)
    {
        for (int i = 0; i < 4; ++i)
        {
            ports[i] = portsObj[i];
        }
    }

    MainMemory *getMainMemory() { return mm; }
    void setMainMemory(MainMemory *mmObj) { mm = mmObj; }

    Port *getPorts() { return ports; }

    GraphicsCard *getGraphicsCard() { return gpuPtr; }
    void setGraphicsCard(GraphicsCard *gpu) { gpuPtr = gpu; }

    NetworkCard *getNetworkCard() { return networkCardPtr; }
    void setNetworkCard(NetworkCard *networkCard) { networkCardPtr = networkCard; }

    PowerSupply *getPowerSupply() { return powerSupplyPtr; }
    void setPowerSupply(PowerSupply *powerSupply) { powerSupplyPtr = powerSupply; }

    Battery *getBattery() { return batteryPtr; }
    void setBattery(Battery *battery) { batteryPtr = battery; }
};