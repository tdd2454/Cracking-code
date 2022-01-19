#include <iostream>
#include <string>

using namespace std;
bool checkAnagram(string, string);
string removeChar(string, char);

int main(){
    string input1 = "icemang";
    string input2 = "niceman";
    bool status = checkAnagram(input1, input2);
    if(status)
        cout << "The input is anagram ";
    else
        cout << "The input is not anagram";
}

bool checkAnagram(string input1, string input2){
    bool anagram = true;
    if(input1.size() != input2.size()) return false;
    for(int n = 0; n<input1.size(); n++){
        for(int m = 0; m<input2.size(); m++){
            if(input1[n] == input2[m]){
                removeChar(input2, input2[m]);
                anagram = true;
                break;
            }
            else
                anagram = false;
        }
    }

    if(anagram) return true;
    else return false;
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