#include "resources.h"

int main(int argc, char* argv[]){
    std::ofstream fil;
    int size = 0;
    std::string a;
    std::vector<std::string> vec = {"ut", "dolore", "nostrud",
    "veniam", "ad", "aliqua", "et", "incididunt", 
    "eiusmod", "sed", "adipiscing", "amet", "ipsum", 
    "est", "anim", "desert", "qui", "sunt", "non", "\t", "\n"};
    std::vector<char> punctuationz = {',', '\'', '.', '"', '!', '?'};
    for(int i = 0; i < argc; i++){
        if(strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0){
            std::cout << "\n\n\tmkDoc v1.1" << std::endl;
            std::cout << "\n\tby FlakeyKarma" << std::endl;
            std::cout << "\n\n\tFor all of your random document creation needs!" << std::endl;
            std::cout << "\n\tUsage:" << std::endl;
            std::cout << "\n\t\tmkDoc <options>" << std::endl;
            std::cout << "\n\tOptions:" << std::endl;
            std::cout << "\t\t-h, --help  \tDisplay this help menu" << std::endl;
            std::cout << "\t\t-f, --file  \tText file chosen for writing" << std::endl;
            std::cout << "\t\t-a, --amount\tAmount of pages worth of writing" << std::endl;
            std::cout << "\n\n" << std::endl;
            exit(1);
        }
        if(strcmp(argv[i], "-f") == 0 || strcmp(argv[i],"--file") == 0){
            i++;
            fil.open((std::string)argv[i]);
            continue;
        }
        if(strcmp(argv[i], "-a") == 0 || strcmp(argv[i], "--amount") == 0){
            i++;
            size = atoi(argv[i]);
            continue;
        }
    }
    if(size == 0){
        size = 2;
    }
    if(fil.good()){
    }
    if(!fil.good()){
        fil.open("temp.txt", std::ios::out | std::ios::app);
    }
    std::cout << size << std::endl;
    std::cout << vec.size() << std::endl;
    int inty, intx;
    for(int i = 0; i < size*638; i++){
        inty = rand() % vec.size();
        if(inty == vec.size()-1 || inty == vec.size()-2){
            fil << vec.at(vec.size()-1) + vec.at(vec.size()-2);
            continue;
        }
        fil << vec.at(inty);
        if(rand() % 10 == 1)
            fil << punctuationz.at(rand() % punctuationz.size());
        if(i != size*638-1){
            fil << " ";
        }
    }
    fil << "." << std::endl;
    fil.close();
    std::cout << "done" << std::endl;
    return 0;
}