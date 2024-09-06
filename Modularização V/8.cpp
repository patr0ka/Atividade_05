#include <iostream>
using namespace std;

void maiuscula(char *palavra){
    for(int i=0; palavra[i]!='\0'; i++){
        if(palavra[i] >= 97 && palavra[i] <= 122){
            palavra[i] -= 32;
        }
        else{
        }
    }
    cout << palavra;
}

int main(){
    string termo;
    getline(cin, termo);
    maiuscula(&termo[0]);
}