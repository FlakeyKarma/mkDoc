#include "resources.h"

void docMk::clr(){
    #ifdef _WIN_32
    system("CLS");
    #else
    system("clear");
    #endif
};

void docMk::pauz(){
    #ifdef _WIN_32
    system("pause");
    #else
    std::cout << "/EnterAnyKey";
    std::cin.ignore();
    std::cin.get();
    #endif
};