#include <iostream>
using namespace std;


int mult(int a, int b){
    int resultado;
    resultado = a*b;
    return resultado;
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << mult(x,y) << endl;
}