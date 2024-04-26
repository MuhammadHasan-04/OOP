#include <iostream>
using namespace std;

class Port
{
private:
    string type;
    int baud_rate;

public:
    Port() : type(""), baud_rate(0) {}
    Port(string t, int b) : type(t), baud_rate(b) {}

    // Getters and Setters
    string get_Type() { return type; }
    void set_Type(string t) { type = t; }

    int get_BaudRate() { return baud_rate; }
    void set_BaudRate(int b) { baud_rate = b; }
};
