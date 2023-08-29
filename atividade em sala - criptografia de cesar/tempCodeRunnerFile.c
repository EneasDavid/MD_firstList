#include <stdio.h>

#define maximo 100

void criptografia(int chave, char texto[maximo]) {
    for(int i=0; texto[i]!='\0'; i++) {
         texto[i]+=chave;
    }
}
int main() {
    int opcao, estado = 0;
    char mensagem[maximo];

    do{
        printf("1. Para digitar uma mensagem\n2. Para CRIPTOGRAFAR a mensagem\n3. Para DESCRIPTOGRAFAR a mensagem\n0. Para encerrar o programa\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("Digite uma m