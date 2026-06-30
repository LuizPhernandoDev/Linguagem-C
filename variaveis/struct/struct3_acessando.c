#include <stdio.h>

struct TipoPessoa{
	int idade;
	float peso;
	char nome[50];
};

int main(){
	
	struct TipoPessoa Pessoa = { 20, 83.0, "Luiz Phernando"};
	
	Pessoa.idade = 19;
	Pessoa.peso = 80.0;
	//Pessoa.nome[50] = "Luiz Phernando";  //é imposivel acessar um char como array dessa forma depois de ja ter inicializada 
	
	printf("Inicio:\n");
	printf("Idade: %d.\n", Pessoa.idade);
	printf("Peso: %.2f.\n", Pessoa.peso);
	printf("Nome: %s.\n", Pessoa.nome);
	
	return 0;
}