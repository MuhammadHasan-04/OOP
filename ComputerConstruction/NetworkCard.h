#include <iostream>
#include <string>
using namespace std;

class NetworkCard
{
private:
    string type;
    int speed;
    double price;

public:
    NetworkCard() : type(""), speed(0), price(0) {}
    NetworkCard(string t, int s, double p) : type(t), speed(s), price(p) {}

    // Setters
    void set_price(double p) { this->price = p; }
    void set_speed(int s) { this->speed = s; }
    void set_type(string t) { this->type = t; }

    // Getters
    int get_speed() { return this->speed; }
    string get_type() { return this->type; }
    double get_price() { return this->price; }
};

class EthernetCard : public NetworkCard
{
public:
    EthernetCard(int s) : NetworkCard("Ethernet", s, 50) {}
};

class WiFiCard : public NetworkCard
{
public:
    WiFiCard(int s) : NetworkCard("WiFi", s, 100) {}
};