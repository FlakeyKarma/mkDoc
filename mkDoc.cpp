#include "resources.h"

int main(int argc, char* argv[]){
    ofstream fil;
    int size;
    string a;
    vector<string> vec = {"ut", "dolore", "nostrud",
    "veniam", "ad", "aliqua", "et", "incididunt", 
    "eiusmod", "sed", "adipiscing", "amet", "ipsum", 
    "est", "anim", "desert", "qui", "sunt", "non"};
    for(int i = 0; i < argc; i++){
        if(strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help")){
            cout << "\n\n\tmkDoc v1.0" << endl;
            cout << "\n\tby FlakeyKarma" << endl;
            cout << "\n\n\tFor all of your random document creation needs!" << endl;
            cout << "\n\tUsage:" << endl;
            cout << "\n\t\tmkDoc <options>" << endl;
            cout << "\n\tOptions:" << endl;
            cout << "\t\t-h, --help  \tDisplay this help menu" << endl;
            cout << "\t\t-f, --file  \tText file chosen for writing" << endl;
            cout << "\t\t-a, --amount\tAmount of pages worth of writing" << endl;
            cout << "\n\n" << endl;
            exit(1);
        }
        if(strcmp(argv[i], "-f") == 0 || strcmp(argv[i],"--file") == 0){
            i++;
            fil.open(argv[i], ios::out | ios::app);
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
        fil.open("temp.txt", ios::out | ios::app);
    }
    cout << size << endl;
    cout << vec.size() << endl;
    int inty;
    for(int i = 0; i < size*638; i++){
        inty = rand() % vec.size();
        fil << vec.at(inty) << " ";
    }
    fil << "END" << endl;
    fil.close();
    cout << "done" << endl;
    return 0;
}