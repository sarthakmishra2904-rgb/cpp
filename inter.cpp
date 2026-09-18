#include <iostream>
#include <string>

// 1. Define the Interface
class Switchable {
public:
    // Pure virtual functions (The Contract)
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;

    // Virtual destructor is vital for cleanup
    virtual ~Switchable() = default; 
};

// 2. Concrete Class 1: A LightBulb implementing the contract
class LightBulb : public Switchable {
public:
    void turnOn() override {
        std::cout << "LightBulb: Glowing bright!\n";
    }
    void turnOff() override {
        std::cout << "LightBulb: Darkness...\n";
    }
};

// 3. Concrete Class 2: A Fan implementing the contract
class Fan : public Switchable {
public:
    void turnOn() override {
        std::cout << "Fan: Blades are spinning.\n";
    }
    void turnOff() override {
        std::cout << "Fan: Coming to a stop.\n";
    }
};

// 4. Using Polymorphism with the Interface
void operateDevice(Switchable& device) {
    device.turnOn();
    device.turnOff();
}

int main() {
    LightBulb bulb;
    Fan deskFan;

    // We can pass different objects into the same interface-driven function
    operateDevice(bulb);
    operateDevice(deskFan);

    return 0;
}
