#include<iostream>

int main(){
    //create a variable it can be empty or not
    int n = 5;
    std::cout << n << std::endl;
    // then create a pointer and assign the address
    //of the created variable by putting &.
    int* ptr = &n;
    std::cout << ptr << std::endl;
    //when you want to see/access the value of address
    //you can put * or dereferencing it
    std::cout << *ptr << std::endl;

    //you can assign new value inside the address
    //of your pointer by this method
    *ptr = 19;
    std::cout << ptr << std::endl;
    std::cout << n << std::endl;

    //sample of creating a pointer with empty variable
    //In this case you can manually assign the value of
    //the variable by assigning a value straight to the pointer
    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    std::cout << "v = " << v;

    return 0;
}

