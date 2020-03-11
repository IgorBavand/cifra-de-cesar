//José Igor de Sousa - 404735
#include <stdio.h>


int main()
{
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

        while (palavra[tamanho_palavra] != '\0')
        {
            tamanho_palavra++;
        }
        tamanho_palavra = tamanho_palavra - 1;
        char palavra_criptografada[200];
        int i = 0, l = 0, cont = 0;
        do{ //para percorrer a string
            l = 0;
            do{ //percorrer o alfabeto
                if (palavra[i] == ' ')
                {
                    palavra_criptografada[i] = ' ';
                    cont++;
                }
                else
                {

                    if (palavra[i] == alfabeto[l])
                    { //procurar a posicao da letra da palavra no alfabeto
                        int k = 0;
                        posi = l + 1;
                        do{ //quantas posições ele vai andar para frente no alfabeto
                            posi++;
                            if (posi > 26)
                            { //quando passar de 'z' zera a posição
                                posi = 0;
                            }
                            k++;
                        }while (k < chave);
                        if (posi > l)
                        { //sempre que passa de 'z' para 'a' ele começa de 1, então decrementa para 0
                            posi = posi - 1;
                        }
                        palavra_criptografada[i] = alfabeto[posi]; //pegando a letra da posição da chave
                    }
                }
                l++;
            } while (l < 26);
                i++;
        } while (i < tamanho_palavra);

        palavra_criptografada[tamanho_palavra] = '\0'; // para palvras sem espaços
        

        printf("A criptografia e: %s", palavra_criptografada);
        // printf("%d", tamanho_criptografia);

        //a ligeira raposa marrom saltou sobre o cachorro cansado
        
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

        while (palavra[tamanho_palavra] != '\0')
        {
            tamanho_palavra++;
        }
        tamanho_palavra = tamanho_palavra - 1;
        char palavra_criptografada[200];
    }
    criptografar();
    
    
    return 0;
}
