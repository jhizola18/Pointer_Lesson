#include<iostream>

int main(){
    int row, col;
    std::cout << "How many row and col: ";
    std:: cin >> row >> col;
    // the table pointer points to another pointer
    // which is pointing to the first index on the
    //created array
    int **table = new int*[row];

    //This is to create an another array inside of each
    //each element creating new dynamic array
    for(int i = 0; i < row; i++){
        table[i] = new int[col];
    }
    //loop through the dynamic array named table 
    // to delete all the created array inside the pointer
    //table
    for(int i = 0; i < row; i++){
        delete[] table[i];
    }
    //delete/deallocate the address that the table holds
    delete[] table;
    //point the table to NULL address since its not handling
    //any addresses.SSS
    table = NULL;

    table[1][2] = 88;

      
    return 0;
}