#include<iostream>

int main(){
    
    /*int luckyNum[5] = {2,3,5,7,9};
//The Name of the array is the first address of the array
    std::cout << luckyNum <<std::endl;
    //To check if its true
    std::cout << &luckyNum[0] << std::endl;

    //Both Below is doing the same
    //luckyNum(Name of the Array) is like a pointer
    //and [2] is dereferencing the address 2
    //int num = 2;
    //int *ptr = &num; its like this but you use it 
    //like this std::cout << *(luckyNum + 2) << std::endl;
    std::cout << luckyNum[2] << std::endl;
    std::cout << *(luckyNum + 2) << std::endl;*/
    
    int luckyNum[5];

    for(int i = 0; i < 5; i++){
        std::cout << "Enter Number: ";
        std::cin >> luckyNum[i];
    }

    std::cout << "You Input a group: " << std::endl;
    for(int i = 0; i < 5; i++){
    
        std::cout << *(luckyNum + i) << " ";
        //same as std::luckyNum[i];
        
    }
    return 0;
}