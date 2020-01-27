#include <stdio.h>
int realizarSoma(int x, int y);
int realizarSub(int x, int y);

int main(){
    int resultado = 0;
    int resultado1 = 0;
    resultado = realizarSoma(20,20);
    resultado1 = realizarSub(50,30);

}

int realizarSoma(int x, int y){
    int soma = 0;
    soma = x+ y;
    return soma;

}

int relizarSub(int x, int y){
    int sub = 0;
    sub =x - y;
    return sub;

}
int realizarmul(int x, int y, int z){
    int mult = 0 ;
    mult = x * y * z;
    return mult;

}
