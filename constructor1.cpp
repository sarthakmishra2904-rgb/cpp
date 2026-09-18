#include<iostream>

class Entity
{
    public:
    float X,Y;
    Entity()
    {
        X=0.0f;
        Y=0.0f;
        std::cout<<"constructed"<<std::endl;
    }
    
    ~Entity()
    {
        std::cout<<"destroyed"<<std::endl;
    }

    void print()
    {
        std::cout<< X<<","<< Y <<std::endl;
    }
};
void Function()
{
    Entity e;
    e.print();
}
int main()
{
    Function();
    std::cin.get();
    return 0;
}