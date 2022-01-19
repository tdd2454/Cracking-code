#include <iostream>
#include <string>

using namespace std;

string reverseString(string s);

int main(){
    string s = "abcdefg";
    string result = reverseString(s);

    cout << "result string is " << result;
}

string reverseString(string s){

    char result[s.size()];
    
    int n, m;
    for(n = 0, m = s.size()-1; n < s.size(), m >=0; n++, m--){
        cout << "n is " << n << "vaLue of n " << s[n] << "      ";
        result[m] = s[n];
        cout << "m is " << m << "vaLue of m " << result[m] << "\n";
    }

    return result;
}