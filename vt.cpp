#include <iostream>
#include <string>

// cspell:ignore cherno

class printable {
public:
    virtual std::string GetclassName() = 0;
    virtual ~printable() = default;
};

class Entity : public printable {
public:
    virtual std::string Getname() { return "Entity"; }
    std::string GetclassName() override { return "Entity"; }
};

class Player : public Entity {
private:
    std::string m_Name;

public:
    Player(const std::string& name) : m_Name(name) {}

    std::string Getname() override { return m_Name; }
};

void printname(Entity* entity) {
    std::cout << entity->Getname() << std::endl;
}

void print(printable* obj) {
    std::cout << obj->GetclassName() << std::endl;
}

int main() {
    Entity* e = new Entity();
    printname(e);
    print(e);

    Player* p = new Player("cherno");
    printname(p);
    print(p);

    delete e;
    delete p;

    std::cin.get();
}
#