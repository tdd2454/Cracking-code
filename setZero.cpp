#include <iostream>
#include <vector>

using namespace std;

static void setZero(vector<vector<int>> &s){
    int col[s.size()]; 
    int row[s[0].size()];
    for(int n = 0; n<s.size(); n++){
        for(int m = 0; m<s[0].size(); m++){
            if(s[n][m] == 0){
                row[n] = 1;
                col[m] = 1;
            }
        }
    }

    for(int x = 0; x<s.size(); x++){
        for(int y = 0; y<s[0].size(); y++){
            if(row[x] == 1 || col[y] == 1)
                s[x][y] = 0;
        }
    }
}

static void printmatrix(vector<vector<int>> &s){
    for(int n=0; n<s.size(); n++){
        for(int m=0; m<s[0].size(); m++){
            cout << s[n][m] << ", ";
        }

        cout << "\n" <<endl;
    }
}

int main(){

    vector<vector<int>> input = {{0,1,2,3}, {4,5,6,7}, {8,9,10,1}};

    cout << "Input is " << endl;
    printmatrix(input);
    setZero(input);

    cout << "Output is " << endl;
    printmatrix(input);

}