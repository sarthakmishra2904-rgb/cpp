#include<iostream>

class Entity{ public:
    int Example[5];
    Entity(){
         for(int i = 0; i<5; i++)
    Example[i] =2;
    }

};

int main(){
    int example[5];
    for(int i = 0; i<5; i++)
    example[i] =2;
    std::cout<<example[3]<<std::endl;

    int*another =new int[5];
    for(int i = 0; i<5; i++)
    example[i] =2;
    std::cout<<another[3]<<std::endl;

    delete[] another;

    std::cin.get();
}