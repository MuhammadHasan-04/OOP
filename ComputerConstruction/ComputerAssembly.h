#include <iostream>
#include <string>
using namespace std;

#include "Case.h"
#include "Cpu.h"
#include "PhysicalMemory.h"
#include "MotherBoard.h"

class ComputerAssembly
{
private:
    Case *computerCase;
    PhysicalMemory *physicalMemory;
    MotherBoard *motherBoard;
    CPU *cpu;
    double totalPrice;

public:
    ComputerAssembly() : totalPrice(0) {}
    ComputerAssembly(Case *Cases, PhysicalMemory *PM, MotherBoard *MB, CPU *cpu, double p)
        : computerCase(Cases), physicalMemory(PM), motherBoard(MB), cpu(cpu), totalPrice(p) {}

    Case *getCases() { return this->computerCase; }
    void setCases(Case *Cases) { this->computerCase = Cases; }

    PhysicalMemory *get_PhysicalMemory() { return this->physicalMemory; }
    void set_PhysicalMemory(PhysicalMemory *PM) { this->physicalMemory = PM; }

    MotherBoard *get_MotherBoard() { return this->motherBoard; }
    void set_MotherBoard(MotherBoard *MB) { this->motherBoard = MB; }

    CPU *get_CPU() { return this->cpu; }
    void set_CPU(CPU *cpu) { this->cpu = cpu; }

    double get_TotalPrice() { return this->totalPrice; }
    void set_TotalPrice(double p) { this->totalPrice = p; }

    void addCasePrice(bool isPC)
    {
        if (isPC)
        {
            totalPrice += computerCase->get_price();
        }
    }
};
