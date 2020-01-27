#include <stdio.h>
int soma (int x, int y);

int main(){
    
    printf("soma %d\n", soma(10 ,5));
    mensagem();
}

int soma (int x, int y){
    int som = 0;
    som = x + y;
    return som;
    

}
void mensagem(void){
    printf("fuf nada");
}