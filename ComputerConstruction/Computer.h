#include <iostream>
#include <string>
using namespace std;

#include "MotherBoard.h"
#include "Cpu.h"
#include "PhysicalMemory.h"

class Computer
{
private:
    PhysicalMemory *pm;
    MotherBoard *mb;
    CPU *cpu;

public:
    Computer() : pm(nullptr), mb(nullptr), cpu(nullptr) {}
    Computer(PhysicalMemory *pmObj, MotherBoard *mbObj, CPU *cpuObj) : pm(pmObj), mb(mbObj), cpu(cpuObj) {}

    PhysicalMemory *getPMPtr() { return this->pm; }
    void setPMPtr(PhysicalMemory *pmObj) { this->pm = pmObj; }

    MotherBoard *getMBPtr() { return this->mb; }
    void setMBPtr(MotherBoard *mbObj) { this->mb = mbObj; }

    CPU *getcpuPtr() { return this->cpu; }
    void setcpuPtr(CPU *cpuObj) { this->cpu = cpuObj; }
};
