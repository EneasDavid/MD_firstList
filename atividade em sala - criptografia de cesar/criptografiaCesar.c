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
                printf("Digite uma mensagem: ");
                getchar(); // Limpa o buffer do teclado
                fgets(mensagem, maximo, stdin);
                break;
            case 2:
                if (mensagem[0]!='\0') {
                    if(!estado){
                        criptografia(3, mensagem);
                        estado=1;
                        printf("%s\n", mensagem);
                    }else{
                        printf("A mensagem ainda não foi criptografada!\n");
                    }
                }else{
                    printf("Digite uma mensagem primeiro!\n");
                }
                break;
            case 3:
                if(mensagem[0]!='\0') {
                    if(estado){
                        criptografia(-3, mensagem);
                        estado=0;
                        printf("%s\n", mensagem);
                    }else{
                        printf("A mensagem já foi descriptografada!\n");
                    }
                }else{
                    printf("Digite uma mensagem primeiro!\n");
                }
                break;
            case 0:
                printf("\n\nAté mais\n\n");
                return 0;
        }
    } while(opcao!=0);
    return 0;
}
