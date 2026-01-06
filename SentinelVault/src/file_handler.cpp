#include<iostream>
#include<string>
#include<filesystem>

namespace fs = std::filesystem;

class FileHandler{
    public:
        static bool is_in_existence(const std::string& file_path){
            fs::path p(file_path);

            if(fs::exists(p)){
                if(fs::is_directory(p)){
                    std::cout<<"THis is a directory! Cannot be accessed!\n";
                }
                return true;
            }else{
                return false;
            }
        }
};

