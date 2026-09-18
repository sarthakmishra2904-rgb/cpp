#include <iostream>
#include "Log.h" 
using namespace std;

int main() 
{
    for(int i=0; i<6; i++)

    { 
        if(i%2==0)
        continue;
        Log("Hello!!\n");
        std::cout<<i<<std::endl;
    }
    std::cin.get();
}