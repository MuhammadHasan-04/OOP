#include <iostream>
#include <string>
using namespace std;

#include "Alu.h"
#include "Cu.h"

class CPU
{
private:
    ALU alu;
    CU cu;

public:
    CPU() : alu(), cu() {}
    CPU(const ALU &aluObj, CU &cuObj) : alu(aluObj), cu(cuObj) {}

    void set_alu(ALU &obj) { this->alu = obj; }
    void set_cu(CU &other) { this->cu = other; }

    ALU get_alu() { return this->alu; }
    CU get_cu() { return this->cu; }
};

class IntelCPU : public CPU
{
private:
    string arch;

public:
    IntelCPU() : arch("x86") {}

    string get_arch() { return arch; }
    void set_arch(string &a) { arch = a; }
};

class AMDCPU : public CPU
{
private:
    string arch;

public:
    AMDCPU() : arch("x86") {}

    string get_arch() { return arch; }
    void set_arch(string &a) { arch = a; }
};

class AppleCPU : public CPU
{
private:
    string arch;
    string IGPU;

public:
    AppleCPU() : arch("ARM64"), IGPU("AppleIGPU") {}

    string get_arch() { return arch; }
    void set_arch(string &a) { arch = a; }

    string get_IGPU() { return IGPU; }
    void set_IGPU(string &gpu) { IGPU = gpu; }
};
