#include<stdio.h>
#include<string.h>
int main(){
    char alfabeto[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u','v', 'w', 'x', 'y', 'z','\0'};
    char palavra[50];
    int chave = 0;
    int posi = 0;
    puts("digite a chave de criptografia: ");
    scanf("%d",&chave);
    puts("digite a palavra: ");
    scanf("%s", palavra);
    int tamanho = strlen(palavra);
    char palavra_criptografada[50];
    int i = 0, l = 0;
    while(i < tamanho){
        l = 0;
        while (l < 26){
            if(palavra[i] == alfabeto[l]){
                int k = 0;
                posi = l+1;
                while(k < chave){
                    posi++;
                    if(posi>26){
                        posi = 0;
                    }
                    k++;
                   
                }
                if(posi > l){
                    posi = posi -1;
                }
                palavra_criptografada[i] = alfabeto[posi];
                
            }
            l++;
        }
        i++;  
    }
    int final = strlen(palavra_criptografada);

    palavra_criptografada[final] = '\0';
    //printf("%c", alfabeto[posi]);
    printf("%s",palavra_criptografada);
    return 0;
}