#include <iostream>
#include <string>
using namespace std;

class MainMemory
{
private:
    int capacity;
    string technologyType; // (Possibly Semiconductor or Silicon)

public:
    MainMemory() : capacity(0), technologyType("") {}
    MainMemory(int c, string tech) : capacity(c), technologyType(tech) {}

    /// Setters
    void set_capacity(int cap) { this->capacity = cap; }
    void set_technologyType(string tech) { this->technologyType = tech; }

    /// Getters
    int get_capacity() { return this->capacity; }
    string get_technologyType() { return this->technologyType; }
};
