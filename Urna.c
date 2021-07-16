/**************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct candidato
{
    char nome[50];
    int numero;
    int votos;
};

int main()
{
	int menu;   // opções do menu
	int sairMenu = 0;   // false
	
	struct candidato prefeitos[3];      // 3 candidatos a prefeito
    struct candidato vereadores[4];     // 4 candidatos a vereador
    
    strcpy(prefeitos[0].nome, "Prefeito Dr Zureta");        // candidato 1
    prefeitos[0].numero = 11;
    prefeitos[0].votos = 0;
    
    strcpy(prefeitos[1].nome, "Prefeito Senhor Gomes");     // candidato 2
    prefeitos[1].numero = 22;
    prefeitos[1].votos = 0;
    
    strcpy(prefeitos[2].nome, "Voto Nulo");                 // voto nulo
    prefeitos[2].numero = 44;
    prefeitos[2].votos = 0;

    strcpy(vereadores[0].nome, "Vereador Joao do Frete");       // candidato 1
    vereadores[0].numero = 111;
    vereadores[0].votos = 0;
    
    strcpy(vereadores[1].nome, "Vereador Maria da Pamonha");    // candidato 2
    vereadores[1].numero = 222;
    vereadores[1].votos = 0;
    
    strcpy(vereadores[2].nome, "Vereador Ze da Farmacia");      // candidato 3
    vereadores[2].numero = 333;
    vereadores[2].votos = 0;
    
    strcpy(vereadores[3].nome, "Voto Nulo");                    // voto nulo
    vereadores[3].numero = 444;
    vereadores[3].votos = 0;
	
	while(1)
	{
		printf("Digite uma opcao: \n");
    	printf("1 - Votar \n");
    	printf("2 - Apuracao dos Votos \n");
    	printf("3 - Sair \n");
    	scanf("%d", &menu);
    	fflush(stdin);
    
	    switch(menu)
	    {
	        // votar
			case 1 : {
			    // limpa os caracteres que foram impressos
                system("clear");
			    //
			    // Voto para prefeito
			    //
			    int votoPrefeito = 0;
                printf("Prefeito: \n");
			    // candidatos a prefeito
                for (int i = 0; i < 3; i++)
                {
                    printf("%d - %s\n", prefeitos[i].numero, prefeitos[i].nome);
                }
                // pede o voto para prefeito
                scanf("%d", &votoPrefeito);
                // limpa o buffer do teclado
                fflush(stdin);
                // salva o voto para prefeito
                for (int i = 0; i < 3; i++)
                {
                    if (prefeitos[i].numero == votoPrefeito)
                    {
                        prefeitos[i].votos++;
                        break;
                    }
                }
                // limpa os caracteres que foram impressos
                system("clear");
                //
                // Voto para Vereador
                //
			    int votoVereador = 0;
                printf("Vereador: \n");
			    // candidatos a vereador
                for (int i = 0; i < 4; i++)
                {
                    printf("%d - %s\n", vereadores[i].numero, vereadores[i].nome);
                }
                // pede o voto para vereador
                scanf("%d", &votoVereador); 
                // limpa o buffer do teclado
                fflush(stdin);
                // salva o voto para vereador
                for (int i = 0; i < 3; i++)
                {
                    if (vereadores[i].numero == votoVereador)
                    {
                        vereadores[i].votos++;
                        break;
                    }
                }    
                // limpa os caracteres que foram impressos
                system("clear");
				break;
			}
			case 2 : {
			    // conta votos dos prefeitos
			    printf("Total de votos para Vereadores:\n");
                for (int i = 0; i < 3; i++)
                {
                    printf("%s - %d votos\n", prefeitos[i].nome, prefeitos[i].votos);
                }
                // conta votos dos vereadores
                printf("Total de votos para Prefeito:\n");
                for (int i = 0; i < 4; i++)
                {
                    printf("%s - %d votos\n", vereadores[i].nome, vereadores[i].votos);
                }
                printf("\n");
				break;
			}
			case 3 : {
				printf("OK, saindo... \n");
				sairMenu = 1;
				break;
			}
	    }
	    
	    if (sairMenu == 1) break;
	}

    return 0;
}