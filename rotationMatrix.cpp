#include <iostream>

#define N 5

using namespace std;

//static void rotation(int **, int );

static void rotation(int matrix[][N], int n){
    for(int layer = 0; layer<n/2; layer++){
        int first = layer;
        //cout << "Number of layer and first is " << first << "\n"; 
        int last = n - layer - 1;
        //cout << "Number of last is " << last << "\n"; 
        cout << "+++++++++++++++++++++++++++++++++" << "\n";
        for(int x = first; x<=last; x++){
            int offset = x - first;
            int top = matrix[first][x];
            
            
            matrix[first][x] = matrix[last-offset][first]; //left -> top 
           
            matrix[last-offset][first] = matrix[last][last-offset]; //bottom -> left
            
            matrix[last][last-offset] = matrix[x][last]; // right -> bottom

            matrix[x][last] = top;

        }        
    }
}

void print(int matrix[][N]){
    for(int x=0; x<N; x++){
        for(int y=0; y<N; y++)
            cout << matrix[x][y] << ", ";
        cout << "\n";
    }
}

int main(){
    int matrix[N][N];

    for(int n=0; n<N; n++){
        for(int m=0; m<N; m++)
            matrix[n][m] = rand()%10;
    }

    cout << "matrix before rotation \n";
    print(matrix);

    rotation(matrix, N);
    cout << "matrix after rotation \n";

    print(matrix);
}
