#include<iostream>
#include<memory>

class myClass{
    public:
        //constructor
        myClass(){
            std::cout << "Constructor Invoked!\n";
        }
        //destructor
        ~myClass(){
            std::cout << "Destructor Invoked!\n";
        }
};

int main(){
    {
    //Here where we created a share pointer that has a user defined 
    //data type called myClass
    std::shared_ptr<myClass>shPtr1 = std::make_shared<myClass>();
    //this is to show  how many owners that pointer have
    std::cout << "Shared Count: " << shPtr1.use_count() << std::endl;
    {
        //entering this scope we created new shared pointer
        //that equates to the previous pointer this makes a new
        //owner of the pointer now when we print the count of shared pointer
        //it shows now there is 2 onwer of the pointer
        std::shared_ptr<myClass>shPtr2 = shPtr1;
        std::cout << "Shared Count: " << shPtr1.use_count() << std::endl;
        //reaching this end of the scope it destorys this specific owner
    }
    //So when we print the count here it counts now as only1
    std::cout <<  "Shared Count: " << shPtr1.use_count() << std::endl;

    //reaching this scope it will invoke the destrutor
    }

    
    
   
    system("pause>nul");
} 