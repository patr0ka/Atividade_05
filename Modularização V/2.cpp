#include <iostream>
using namespace std;


int mult(int *a, int *b){
    int resultado;
    resultado = *a * *b;
    return resultado;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << mult(&a,&b) << endl;
}