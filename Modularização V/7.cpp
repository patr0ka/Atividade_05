#include <iostream>
using namespace std;

void inverter(int *v, int tam){
    int i;
    for(i=0; i<(tam/2); i++){
        swap(v[i], v[tam-1-i]);
    }
    for(i=0; i<tam; i++){
        cout << v[i] << " ";
    }
}

int main(){
    int i, tam;
    cin >> tam;
    int v[tam]={0};
    for(i=0; i<tam; i++){
        v[i] = i;
    }
    inverter(v, tam);
}