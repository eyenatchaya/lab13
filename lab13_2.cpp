#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}
void showImage(const bool G[N][M]){
    for(int I = 0; I < M+2; I++) cout << "-";
    cout << "\n";
    for(int J = 0; J < N; J++ ){
        cout << "|";
        for(int K = 0; K < M; K++ ){
            if(G[J][K] == 1) cout << "*";
            else cout << " ";
        }
        cout << "|\n";
    }
    for(int i = 0; i < M+2; i++) cout << "-";
    cout << "\n";
}
void updateImage(bool S[N][M], int A, int B, int C ){
   for(int I = 0; I < N; I++)
       for(int J = 0; J < M; J++)
           if(sqrt((pow(I-B,2))+(pow(J-C,2))) <= A-1)
                S[I][J]= 1; 
}
