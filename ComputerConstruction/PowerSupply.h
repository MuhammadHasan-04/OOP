#include <iostream>
#include <string>
using namespace std;

class PowerSupply
{
private:
    int wattage;
    string efficientRating;
    double price;

public:
    PowerSupply() : wattage(0), efficientRating(""), price(0) {}
    PowerSupply(int w, string t, double p) : wattage(w), efficientRating(t), price(p) {}

    int get_Wattage() { return this->wattage; }
    string get_EfficiencyRating() { return this->efficientRating; }
    double get_Price() { return this->price; }

    void set_Wattage(int w) { this->wattage = w; }
    void set_EfficiencyRating(string t) { this->efficientRating = t; }
    void set_Price(double p) { this->price = p; }
};
