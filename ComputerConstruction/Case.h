#include <iostream>
#include <string>
using namespace std;

class Case
{
private:
    string color;
    string formFactor;
    double price;

public:
    Case() : formFactor(""), color(""), price(0.0) {}
    Case(string &f, string &c, double p) : formFactor(f), color(c), price(p) {}

    void set_formFactor(string &t) { this->formFactor = t; }
    void set_color(string &c) { this->color = c; }
    void set_price(double p) { this->price = p; }

    string get_formFactor() { return this->formFactor; }
    string get_color() { return this->color; }
    double get_price() { return this->price; }
};
