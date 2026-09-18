#include <iostream>
#include<string>

int main()
{
    std::string name= std::string("chereno ") + "hello?";
   bool contains = name.find("no")!=std::string::npos;
    std::cout<<name<<std::endl;

    std::cin.get();
}