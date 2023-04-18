#include<iostream>

int add(int a, int b){
    return a + b;
}


int main(){
    //This is how to create a function Pointer
    int (*funcPtr)(int,  int) = add;
    std::cout << add(2,4) << std::endl;
    std::cout << funcPtr(5,7) << std::endl;


    return 0;
}