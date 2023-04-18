#include<iostream>

void printNumber(int* numPtr){
    std::cout << *numPtr << std::endl;
}

void printChar(char* lettPtr){
    std::cout << *lettPtr << std::endl;
}

void print(void* ptr, char type){
    switch(type){
        case 'i':
            std::cout << *((int*)ptr) << std::endl;
            break;
        case 'c':
            std::cout << *((char*)ptr) << std::endl;
            break;
        case 's':
            std::cout << *((std::string*)ptr) << std::endl;
            break;
        default:
            std::cout << "Invalid Pointer" << std::endl;
    }
}

int main(){

    int num = 5;
    char letter = 'a';
    std::string str = "Hello";

    //printNumber(&num);
    //printChar(&letter);
    
    //equivalent to char* ptr = &letter
    //std::cout << *ptr;
    print(&letter,'c');

    //equivalent to int* ptr = &num
    //std::cout << *ptr;
    print(&num,'i');

    print(&str,'s');

    std::cout << &num;
    return 0;
}