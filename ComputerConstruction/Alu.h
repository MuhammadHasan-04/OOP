#include <iostream>
#include <string>
using namespace std;

class ALU
{
private:
    int no_of_adders;
    int no_of_subs;
    int no_of_regs;
    int size_of_reg;

public:
    ALU() : no_of_adders(0), no_of_subs(0), no_of_regs(0), size_of_reg(0) {}
    ALU(int x1, int x2, int y1, int y2) : no_of_adders(x1), no_of_subs(x2), no_of_regs(y1), size_of_reg(y2) {}

    // Setters
    void set_adders(int x1) { this->no_of_adders = x1; }
    void set_subs(int x2) { this->no_of_subs = x2; }
    void set_regs(int y1) { this->no_of_regs = y1; }
    void set_size(int y2) { this->size_of_reg = y2; }

    // Getters
    int get_adders() { return this->no_of_adders; }
    int get_subs() { return this->no_of_subs; }
    int get_regs() { return this->no_of_regs; }
    int get_size() { return this->size_of_reg; }
};
