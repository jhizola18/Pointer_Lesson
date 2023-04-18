#include<iostream>
#include<vector>

bool ascendingCompare(int a, int b){
    return a < b;
}

bool descendingCompare(int a, int b){
    return a > b;
}
// This is how to create a function pointer as an parameter
void customSort(std::vector<int>& numbersVector,bool(*compareFuncPtr)(int,int)){
    for(int startIndex = 0; startIndex < numbersVector.size(); startIndex++){
        int bestIndex = startIndex;

        for(int currentIndex = startIndex + 1;currentIndex < numbersVector.size(); currentIndex++){
            //instead of calling the ascendfunc and the descendfunc seperately we use a funcion
            //pointer to use it here 
            if(compareFuncPtr(numbersVector[currentIndex],numbersVector[bestIndex])){
                bestIndex = currentIndex;
            }
        }
        std::swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }

}


void printNumbers(std::vector<int>& numbersVector){
    for(int i = 0; i < numbersVector.size(); i++){
        std::cout <<numbersVector[i] << " ";
    }
}

int main(){

    std::vector<int>myNumbers = {2,5,1,3,6,4};
    //Then we create a new function pointer here to call what functionality
    //we will use.
    bool(*funcPtr)(int,int) = descendingCompare;
    customSort(myNumbers, funcPtr);
    printNumbers(myNumbers);

    return 0;
}