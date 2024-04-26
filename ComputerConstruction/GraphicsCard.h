#include <iostream>
#include <string>
using namespace std;

class GraphicsCard
{
private:
    string brand;
    int memorySize;
    double price;

public:
    GraphicsCard() : brand(""), memorySize(0), price(0) {}
    GraphicsCard(const string &b, int size, double p) : brand(b), memorySize(size), price(p) {}

    // Getters and Setters
    string get_brand() { return this->brand; }
    void set_brand(const string &b) { this->brand = b; }

    int get_Memory() { return this->memorySize; }
    void set_Memory(int size) { this->memorySize = size; }

    double get_Price() { return this->price; }
    void set_Price(double p) { this->price = p; }
};

// Derived class for Nvidia GPUs
class NvidiaGPU : public GraphicsCard
{
private:
    string brand;

public:
    NvidiaGPU(const string &b, int size, double p) : GraphicsCard(b, size, p), brand(b) {}

    // Getters and Setters for the brand
    string get_brand() { return this->brand; }
    void set_brand(const string &b) { this->brand = b; }
};

// Derived class for AMD GPUs
class AmdGPU : public GraphicsCard
{
private:
    string brand;

public:
    AmdGPU(const string &b, int size, double p) : GraphicsCard(b, size, p), brand(b) {}

    // Getters and Setters for the brand
    string get_brand() { return this->brand; }
    void set_brand(const string &b) { this->brand = b; }
};

// Derived class for Apple GPUs
class AppleGPU : public GraphicsCard
{
private:
    string brand;

public:
    AppleGPU(const string &b, int size, double p) : GraphicsCard(b, size, p), brand(b) {}

    // Getters and Setters for the brand
    string get_brand() { return this->brand; }
    void set_brand(const string &b) { this->brand = b; }
};
