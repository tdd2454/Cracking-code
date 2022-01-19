#include <iostream>
#include <string>
#include "myfunction.h"

using namespace std;

string removeChar(string, char);

int main(){

    string name = "Thang Dinh";
    char remove = 'D';
    string result = removeChar(name, remove);

    cout << "result is " << result << endl;
}

string removeChar(string input, char remove){

    for(int i=0; i<input.size(); i++){
        if(input[i] == remove){
            for(int n = i; n<input.size(); n++){
                if(n < input.size()-1)
                    input[n] = input[n+1];
                else
                    input[n] = '\0';
            }
        }
    }

    return input;
}