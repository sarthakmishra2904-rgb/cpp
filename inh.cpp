#include<iostream>

 class Entity{
    public:
        float X, Y;
        void move(float xa, float ya)
        {
            X += xa;
            Y += ya;
        }
 };
 class player : public Entity
 {
     const char* Name;

        void printname()
        {
            std::cout<< Name <<std::endl;
        }
 };



 int main()
 {
    std::cout<<sizeof(Entity)<<std::endl;
    
    player p;
    p.move(5,5);
    p.X =2;

    std::cin.get();

    return 0;
 }
