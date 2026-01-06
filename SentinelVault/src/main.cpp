
#include "header.h"
using namespace std;

int main(){
    string path;
    cout<<"Enter the path of the file:"<<endl;
    getline(cin,path);

    if (FileHandler::is_in_existence(path)){
        cout<<"File exists.\n";
    }
}