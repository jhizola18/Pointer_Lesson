#include<iostream>

int main(){
    int size;
    std::cout << "Size: ";
    std::cin >> size;
    int* myArr = new int[size];


    for(int i = 0; i<size; i++){
        std::cout << "Array position [ " << i << " ] ";
        std::cin >> myArr[i];
    }
    //normal way to dereference
    std::cout << "Reversed List: ";
    for(int i = size - 1; i >= 0  ; i--){
        
        std::cout << " Elements: " << *(myArr+i);
        
    }
    //pointer way to derefence elements of array
    /**for(int i = size; i >= 0; i--){
        std::cout << *(myArr+i) << " ";

    }**/

    delete[]myArr;
    // the array is now NULL its not pointing to anything 
    // to prevent using address not from this program
    myArr = NULL;


    return 0;
}