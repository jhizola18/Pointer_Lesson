#include<iostream>
#include<memory>

class myClass{
    public:
        myClass(){
            std::cout << "Constructor Invoked!!\n";
        };
        ~myClass(){
            std::cout << "Destructor Invoked!!\n";
        }
};

int main(){

    std::weak_ptr<int>wePtr1;
    {
        std::shared_ptr<int>shPtr1 = std::make_shared<int>(25);
        wePtr1 = shPtr1;
    }


    

    return 0;
}