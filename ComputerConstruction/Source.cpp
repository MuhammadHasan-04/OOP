// Name : Muhammad Hasan Altaf
// Roll No : 23i-0698
// Section : E
// Coure Instructor : Maam Marium Hida
// TA Name : Muhammad Ali Naveed

#include <iostream>
#include "Linkage.h"

int main()
{

    // Welcome message
    cout << "Welcome to Computer Assembly Program!" << endl;
    cout << "Let's assemble your computer." << endl;

    // Variables to store user input
    int choice;
    string formFactor, color;
    double price;
    bool isPC;

    // Ask user for computer type
    cout << "Choose computer type: (1 for PC, 0 for Mac) --> ";
    cin >> choice;
    isPC = (choice == 1);

    if (isPC)
    {
        // Ask user for case details
        cout << "Enter case form factor (ATX,MICRO ATX ) --> ";
        cin >> formFactor;
        cout << "Enter case color --> ";
        cin >> color;
        cout << "Enter case price(1000$ - 5000$) -->";
        cin >> price;

        // Create case object
        Case *computerCase = new Case(formFactor, color, price);

        // Create other components (assuming PC components)
        PhysicalMemory *memory = new PhysicalMemory(16);         // 16 GB
        MainMemory *mainMemory = new MainMemory(512, "Silicon"); // 512 GB Silicon memory
        Port ports[4];                                           // Assuming 4 ports
        for (int i = 0; i < 4; ++i)
        {
            ports[i] = Port("Type", 100);
        }

        int gpuType;

        cout << "Enter the GPU You Want to Use in Your Computer " << endl;
        cout << "1. NVIDIA" << endl;
        cout << "2. AMD" << endl;
        cin >> gpuType;

        int GPU_price = 500;
        int network_Price = 500;
        int supplyPrice = 500;
        GraphicsCard *gpu = nullptr;
        if (gpuType == 1)
        {
            gpu = new NvidiaGPU("Nvidia", 8, GPU_price);
        }
        else if (gpuType == 2)
        {
            gpu = new AmdGPU("AMD", 8, GPU_price);
        }

        // Other components
        NetworkCard *networkCard = new NetworkCard("Ethernet", 1000, network_Price); // Ethernet card with speed 1000 Mbps
        PowerSupply *powerSupply = new PowerSupply(750, "Gold", supplyPrice);        // 750W Gold-rated power supply
        Battery *battery = nullptr;                                                  // no battey in pc

        // Create motherboard object
        MotherBoard *motherboard = new MotherBoard(mainMemory, ports, gpu, networkCard, powerSupply, battery);

        // Create CPU object (assuming PC)
        CPU *cpu = new AMDCPU(); // Assuming Intel CPU

        // Create computer assembly object
        ComputerAssembly *computerAssembly = new ComputerAssembly(computerCase, memory, motherboard, cpu, price);

        // Add case price if it's a PC
        computerAssembly->addCasePrice(isPC);
        int total_price = supplyPrice + GPU_price + network_Price;

        cout << "=============================================" << endl;
        cout << "                 Invoice                           \n";
        cout << "=============================================" << endl;
        cout << "   Case: " << computerAssembly->getCases()->get_color() << " " << computerAssembly->getCases()->get_formFactor() << ", $" << computerAssembly->getCases()->get_price() << endl;
        cout << "   Memory: " << computerAssembly->get_PhysicalMemory()->get_capacity() << "GB" << endl;
        cout << "   Main Memory: " << computerAssembly->get_MotherBoard()->getMainMemory()->get_capacity() << "GB, " << computerAssembly->get_MotherBoard()->getMainMemory()->get_technologyType() << endl;
        cout << "   Graphics Card: " << computerAssembly->get_MotherBoard()->getGraphicsCard()->get_brand() << " " << computerAssembly->get_MotherBoard()->getGraphicsCard()->get_Memory() << "GB, $" << computerAssembly->get_MotherBoard()->getGraphicsCard()->get_Price() << endl;
        cout << "   Network Card: " << computerAssembly->get_MotherBoard()->getNetworkCard()->get_type() << ", " << computerAssembly->get_MotherBoard()->getNetworkCard()->get_speed() << " Mbps, $" << computerAssembly->get_MotherBoard()->getNetworkCard()->get_price() << endl;

        cout << "   Power Supply: " << computerAssembly->get_MotherBoard()->getPowerSupply()->get_Wattage() << "W, " << computerAssembly->get_MotherBoard()->getPowerSupply()->get_EfficiencyRating() << " rated, $" << computerAssembly->get_MotherBoard()->getPowerSupply()->get_Price() << endl;
        cout << "            \nTotal Cost: $" << (computerAssembly->get_TotalPrice() + total_price) << endl;

        // Clean up dynamically allocated memory
        delete computerAssembly;
        delete cpu;
        delete motherboard;
        delete powerSupply;
        delete networkCard;
        delete gpu;
        delete mainMemory;
        delete memory;
        delete computerCase;
    }
    else
    {
        cout << "Enter case form factor (Aluminium Body , Metallic etc ) --> ";
        cin >> formFactor;
        cout << "Enter Mac/Laptop Color  --> ";
        cin >> color;

        Case *computerCase = new Case(formFactor, color, 0.0);

        // Create other components (assuming PC components)
        PhysicalMemory *memory = new PhysicalMemory(16);         // 16 GB
        MainMemory *mainMemory = new MainMemory(512, "Silicon"); // 512 GB Silicon memory
        Port ports[4];                                           // Assuming 4 ports
        for (int i = 0; i < 4; ++i)
        {
            ports[i] = Port("Type", 100);
        }

        int GPU_price = 500;
        int network_Price = 500;
        int BatteryPrice = 500;

        GraphicsCard *gpu = new AppleGPU("Apple Integrated Gpu", 4, GPU_price);
        NetworkCard *networkCard = new NetworkCard("Ethernet", 1000, network_Price); // Ethernet card with speed 1000 Mbps
        PowerSupply *powerSupply = nullptr;                                          // no power supply in Mac/Laptop
        Battery *battery = new Battery(5000, BatteryPrice);                          // 5000 mAh battery

        // Create motherboard object
        MotherBoard *motherboard = new MotherBoard(mainMemory, ports, gpu, networkCard, powerSupply, battery);

        // Create CPU object (assuming MAC)
        CPU *cpu = new AppleCPU(); // Assuming Applw CPU
        int Cpu_price = 900;

        int total_price = BatteryPrice + GPU_price + network_Price + Cpu_price;
        // Create computer assembly object
        ComputerAssembly *computerAssembly = new ComputerAssembly(computerCase, memory, motherboard, cpu, price);

        cout << "=============================================" << endl;
        cout << "                 Invoice                           \n";
        cout << "=============================================" << endl;
        cout << "   Case: " << computerAssembly->getCases()->get_color() << " " << computerAssembly->getCases()->get_formFactor() << ", $" << computerAssembly->getCases()->get_price() << endl;
        cout << "   Memory: " << computerAssembly->get_PhysicalMemory()->get_capacity() << "GB" << endl;
        cout << "   Main Memory: " << computerAssembly->get_MotherBoard()->getMainMemory()->get_capacity() << "GB, " << computerAssembly->get_MotherBoard()->getMainMemory()->get_technologyType() << endl;
        cout << "   Graphics Card: " << computerAssembly->get_MotherBoard()->getGraphicsCard()->get_brand() << " " << computerAssembly->get_MotherBoard()->getGraphicsCard()->get_Memory() << "GB, $" << computerAssembly->get_MotherBoard()->getGraphicsCard()->get_Price() << endl;
        cout << "   Network Card: " << computerAssembly->get_MotherBoard()->getNetworkCard()->get_type() << ", " << computerAssembly->get_MotherBoard()->getNetworkCard()->get_speed() << " Mbps, $" << computerAssembly->get_MotherBoard()->getNetworkCard()->get_price() << endl;
        cout << "   Battery: " << computerAssembly->get_MotherBoard()->getBattery()->get_capacity() << " mAh" << endl;

        cout << "            \nTotal Cost: $" << (computerAssembly->get_TotalPrice() + total_price) << endl;
        // Clean up dynamically allocated memory
        delete computerAssembly;
        delete cpu;
        delete motherboard;
        delete powerSupply;
        delete networkCard;
        delete gpu;
        delete mainMemory;
        delete memory;
        delete computerCase;
    }

    return 0;
}
