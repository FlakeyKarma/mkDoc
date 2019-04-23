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
    cout << "/EnterAnyKey";
    cin.ignore();
    cin.get();
    #endif
};