#include<stdio.h>//biblioteca de comunic��o com o usu�rio
#include<stdlib.h>//biblioteca de aloca��o de espa�o em mem�ria
#include<locale.h>//biblioteca de aloca�ao de texto por regi�o
#include<string.h>//biblioteca respons�vel por cuidar dos string

int registro()// fun�ao responsavel por cadastras os usuarios no sistema
{
	//inicio cria��o de variaveis/strinng
	char arquivo [40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final d acria��o de variaveis/string
	
	printf("digite o cpf a ser cadastrado:");// coletando informa��es do usuario
	scanf("%s", cpf);// %s referea string
	
	strcpy(arquivo, cpf);//responsavel por copiar os valores das string
	
	FILE *file; //criar o arquivo
	file = fopen(arquivo,"w"); //criar o arquivo e o w significa escrever
	fprintf(file, cpf); // salvo o valor da variavel
	fclose(file); //fechar o arquivo
	
	file = fopen(arquivo, "a");
	fprintf (file,",");
	fclose(file);
	
	printf("digite o nome  a ser cadastrado:");
	scanf("%s", nome);
	
	file = fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("digite o sobrenome a ser cadastrado:");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file= fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("digite o cargo a ser digitado:");
	scanf("%s", cargo);
	
	file= fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf (file,",");
	fclose(file);
	
	printf("obrigada por utilizar o sistema:");
		
	system("pause");
}
	
	int consulta()
	
{
	
	char cpf [40];
	char conteudo[200];
	
	printf("digite o CPF a ser consultado:");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
		
	}
	while (fgets(conteudo, 100, file)!= NULL);
	{
		printf("\n Essas sao as informa�oes do usuario:");
		printf("%s", conteudo);
		printf("\n\n");
	}
	system("pause");
}
	
	int deletar()
{
	char cpf[40];
	printf("digite o cpf do usuario a ser deletado:");
	scanf("%s", cpf);
	
	 remove(cpf);
	 
	 FILE *file;
	 file = fopen(cpf,"r");
	 
	 if(file == NULL)
	 {
	 	printf("o usuario nao se encontra no sistema!\n");
	 	system("pause");
		  }
}
int main ()
{
	int opcao=0; //definindo variaveis
	int laco=1;
	
	for (laco=1; laco=1;)
    {
		system("cls");

 		setlocale(LC_ALL,"portuguese");//definindo a linguagem
 	
 		printf("CART�RIO da EBAC\n\n");
 		printf("escolha a op�ao do MENU:\n\n");//inicio do menu
 		printf("\t1 - registrar nomes:\n\n");
 		printf("\t2 - consultar nomes:\n\n");
 		printf("\t3 - deletar nomes:\n\n");
 		printf("qual a op�ao:");//fim do menu
 	
 	scanf("%d",&opcao);//armazenando a escolha do usuario
 		system("cls"); //responsavel por limpar a tela
 		
 		switch(opcao) //inicio da sele�ao do menu
 	{
 	case 1:
 	registro(); //chamada de fun�ao
  	break;
 	
 	case 2:
 	consulta();//chamada de fun�ao
 	break;
 	
 	case 3:
 	deletar(); //chamada de fun�ao
 	break;
 	  	 	
 	default:
 	printf("essa op�ao nao esta disponivel.\n");
 	system("pause");
	break;
	//fim da sele�ao
	}
 		
	 }  
}

	

 	
 
 	
 
