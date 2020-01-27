#include <stdio.h>
void tabela();
int choice;
int player = 1;
int Winner;
float checkWin;
float rest;



char tabela1[10] = { '0' , '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int main(){
    tabela();
    scanf(" %d", &choice);
    
    rest = player % 2;
    player ++;
    if (rest != 0 )
    {
        player1();
    }
    else if (rest == 0)
    {
        player2();
    }
    
    
}

void tabela(void){
    printf("      |      |      \n");
    printf("   %c  |   %c  |   %c  \n", tabela1[1], tabela1[2], tabela1[3]);
    printf("--------------------\n");
    printf("      |      |      \n");
    printf("   %c  |   %c  |   %c  \n", tabela1[4], tabela1[5], tabela1[6]);
    printf("      |      |      \n");
    printf("--------------------\n");
    printf("   %c  |   %c  |   %c  \n", tabela1[7], tabela1[8], tabela1[9]);
    printf("      |      |      \n");

}
void player1(void){



        if (choice == 1 && tabela1[1] == '1'){
        tabela1[1] = 'X';
    }
    else if (choice == 2 && tabela1[2] == '2') {
        tabela1[2] = 'X';
    }
    else if (choice == 3 && tabela1[3] == '3'){
        tabela1[3] = 'X';
    }
    else if (choice == 4 && tabela1[4] == '4'){
        tabela1[4] = 'X';
    }
    else if (choice == 5 && tabela1[5] == '5'){
        tabela1[5] = 'X';
    }
    else if (choice == 6 && tabela1[6] == '6'){
        tabela1[6] = 'X';
    }
    else if (choice == 7 && tabela1[7] == '7'){
        tabela1[7] = 'X';
    }
    else if (choice == 8 && tabela1[8] == '8'){
        tabela1[8] = 'X';
    }
    else if (choice == 9 && tabela1[9] == '9'){
        tabela1[9] = 'X';
    }
    win();
    main();
}
void player2(void){
        if (choice == 1 && tabela1[1] == '1'){
        tabela1[1] = 'O';
    }
    else if (choice == 2 && tabela1[2] == '2'){
        tabela1[2] = 'O';
    }
    else if (choice == 3 && tabela1[3] == '3'){
        tabela1[3] = 'O';
    }
    else if (choice == 4 && tabela1[4] == '4'){
        tabela1[4] = 'O';
    }
    else if (choice == 5 && tabela1[5] == '5'){
        tabela1[5] = 'O';
    }
    else if (choice == 6 && tabela1[6] == '6'){
        tabela1[6] = 'O';
    }
    else if (choice == 7 && tabela1[7] == '7'){
        tabela1[7] = 'O';
    }
    else if (choice == 8 && tabela1[8] == '8'){
        tabela1[8] = 'O';
    }
    else if (choice == 9 && tabela1[9] == '9'){
        tabela1[9] = 'O';
    }
    win();
    main();
}
void win(void){

    if (rest != 0 )
    {
        checkWin = 1;
    }
    else if (rest == 0)
    {
        checkWin = 2;
    }



     if (tabela1[1] == tabela1[2] && tabela1[2] == tabela1[3]){
        congrats();
    }     
    else if (tabela1[4] == tabela1[5] && tabela1[5] == tabela1[6]){
        congrats();
    }     
    else if (tabela1[7] == tabela1[8] && tabela1[8] == tabela1[9]){
        congrats();
    }     
    else if (tabela1[1] == tabela1[4] && tabela1[4] == tabela1[7]){
        congrats();
    }     
    else if (tabela1[2] == tabela1[5] && tabela1[5] == tabela1[8]){
        congrats();
    }     
    else if (tabela1[3] == tabela1[6] && tabela1[6] == tabela1[9]){
        congrats();
    }     
    else if (tabela1[1] == tabela1[5] && tabela1[5] == tabela1[9]){
        congrats();
    } 
    else if (tabela1[3] == tabela1[5] && tabela1[5] == tabela1[7]){
        congrats();
    } 
    else if (tabela1[1] != '1' && tabela1[2] != '2' && tabela1[3] != '3' &&
        tabela1[4] != '4' && tabela1[5] != '5' && tabela1[6] != '6' && tabela1[7] 
        != '7' && tabela1[8] != '8' && tabela1[9] != '9')
    {
        draw();
    }
    
    else
    {
        main();
    }
    
    main();
}
void congrats(void){
    printf("Concratulation player %f", checkWin);
    exit(0);
}
void draw(void){
    printf("Its a draw!!!");
    exit(0);
}