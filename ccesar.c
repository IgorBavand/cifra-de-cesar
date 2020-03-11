//José Igor de Sousa - 404735
#include <stdio.h>


int main(void){
    void criptografar(){
        char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        char palavra[200];
        int chave = 0;
        int posi = 0;
        int tamanho_palavra = 0;
        int tamanho_criptografia = 0;
        //entradas
        puts("digite a chave de criptografia: ");
        scanf("%d", &chave);
        fflush(stdin);
        puts("digite o que deseja criptografar: ");
        fgets(palavra, 200, stdin);

        while (palavra[tamanho_palavra] != '\0'){//tamanho da palavra
            tamanho_palavra++;
        }
        tamanho_palavra = tamanho_palavra - 1;
        char palavra_criptografada[200];
        int i = 0, l = 0;
        do{ 
            l = 0;
            do{ 
                if (palavra[i] == ' '){//verificar se tem espaços
                    palavra_criptografada[i] = ' ';
                }
                else if (palavra[i] != 'a' && palavra[i] != 'b' && palavra[i] != 'c' && palavra[i] != 'd' && palavra[i] != 'e' && palavra[i] != 'f' && palavra[i] != 'g' && palavra[i] != 'h' && palavra[i] != 'i' && palavra[i] != 'j' && palavra[i] != 'k' && palavra[i] != 'l' && palavra[i] != 'm' && palavra[i] != 'n' &&
                         palavra[i] != 'o' && palavra[i] != 'p' && palavra[i] != 'q' && palavra[i] != 'r' && palavra[i] != 's' && palavra[i] != 't' && palavra[i] != 'u' &&
                         palavra[i] != 'v' && palavra[i] != 'w' && palavra[i] != 'x' && palavra[i] != 'y' && palavra[i] != 'z'){
                    palavra_criptografada[i] = palavra[i];// verifica se não é uma letra do alfabeto, e apenas adiciona, e pula para proxima
                }
                else{

                    if (palavra[i] == alfabeto[l]){// verifica qual posição está a letra 
                        int k = 0;
                        posi = l + 1;
                        do{ 
                            posi++;
                            if (posi > 26){//se passar de 'z' volta para a posição inicial
                                posi = 0;
                            }
                            k++;
                        }while (k < chave);
                        if (posi > l){//sempre que ele passa de 'z' para 'a' pega uma posição a mais, por isso posi = -1
                            posi = posi - 1;
                        }
                        palavra_criptografada[i] = alfabeto[posi];// quando vetor recebe a posição da criptografia
                    }
                }
                l++;
            } while (l < 26);
                i++;
        } while (i < tamanho_palavra); 

        palavra_criptografada[tamanho_palavra] = '\0'; 

        puts("\n\n");
        printf("A criptografia e: %s\n\n", palavra_criptografada);
        
        
    }

    void decript(){
        char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        char palavra[200];
        int chave = 0;
        int posi = 0;
        int tamanho_palavra = 0;
        //entradas
        puts("digite a chave de descriptografia: ");
        scanf("%d", &chave);
        fflush(stdin);
        puts("digite o que deseja descriptografar: ");
        fgets(palavra, 200, stdin);

        while (palavra[tamanho_palavra] != '\0'){
            tamanho_palavra++;
        }
        tamanho_palavra = tamanho_palavra - 1;
        char palavra_descriptografada[200];

        int i = 0, l = 0;
        do{ 
            l = 0;
            do{ 
                if (palavra[i] == ' '){
                    palavra_descriptografada[i] = ' ';
                }
                else if (palavra[i] != 'a' && palavra[i] != 'b' && palavra[i] != 'c' && palavra[i] != 'd' && palavra[i] != 'e' && palavra[i] != 'f' && palavra[i] != 'g' && palavra[i] != 'h' && palavra[i] != 'i' && palavra[i] != 'j' && palavra[i] != 'k' && palavra[i] != 'l' && palavra[i] != 'm' && palavra[i] != 'n' &&
                         palavra[i] != 'o' && palavra[i] != 'p' && palavra[i] != 'q' && palavra[i] != 'r' && palavra[i] != 's' && palavra[i] != 't' && palavra[i] != 'u' &&
                         palavra[i] != 'v' && palavra[i] != 'w' && palavra[i] != 'x' && palavra[i] != 'y' && palavra[i] != 'z'){
                    palavra_descriptografada[i]= palavra[i];
                }else{
                    if (palavra[i] == alfabeto[l])
                    { 
                        int k = 0;
                        posi = l ;
                        do{ 
                            posi--;
                            if (posi < 0){ 
                                posi = 25;
                            }
                            k++;
                        } while (k < chave);
                        palavra_descriptografada[i] = alfabeto[posi];
                    }
                }
                l++;
            } while (l < 26);
            i++;
        } while (i < tamanho_palavra);
        palavra_descriptografada[tamanho_palavra] = '\0'; 
        puts("\n\n");
        printf("A descriptografia e: %s\n\n", palavra_descriptografada);
    }
    int opc=0;

   
    do{
        puts("********************-Cifra de Cesar-*********************");
        puts("|\t\t\t\t\t\t\t|");
        puts("|\t1 - Criptografar\t\t\t\t|");
        puts("|\t2 - Descriptografar\t\t\t\t|");
        puts("|\t3 - Sair\t\t\t\t\t|");
        puts("|\t\t\t\t\t\t\t|");
        puts("*********************************************************");
        puts("Digite a opcao: ");
        scanf("%d", &opc);
        
    if (opc == 1){
        criptografar();
    }else if(opc == 2){
        decript();
    }else if(opc == 3){
        opc = 3;
    }else{
        puts("Opcao invalida, tente novamente xD");
    }

    }while(opc != 3);
    
}
