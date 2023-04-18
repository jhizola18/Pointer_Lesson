#include<iostream>
#include<memory>
#include<string.h>



int main(){
    char Name[25];
    char Addr[25];
    std::cout << "What is your Name? ";
    std::cin.getline(Name,25);
    std::cout << "What is your Address? ";
    std::cin.getline(Addr,25);

    std::unique_ptr<char[]>unPtr1 = std::make_unique<char[]>(strlen(Name) + 1);
    //this is the way to get a char using shared pointer
    std::copy(Name, Name + strlen(Name) + 1, unPtr1.get());
    std::cout << "Name: " << unPtr1.get() << std::endl;

    std::unique_ptr<char[]>unPtr2 = move(unPtr1);
    std::copy(Addr, Addr + strlen(Addr) + 1, unPtr2.get());
    std::cout << "Address: " << unPtr2.get() << std::endl;
    //This prints nothing since we move the first pointer address to the
    //new one which is unPtr2 and now the unPtr1 value is NULL
    std::cout << "Address: " << unPtr1.get() << std::endl;
    return 0;
}