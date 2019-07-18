#include<stdio.h>
#include<stdlib.h>

struct dia{
	int dd,mm,yyyy;
};

typedef struct dia Dia;

struct pessoa{
	char nome[50];
	Dia nascimento;
};

typedef struct pessoa Pessoa;

void exibirPessoa(Pessoa p){
    
    printf("Nome:%s\nNascimento: %02i/%02i/%4i\n", 
	p.nome,p.nascimento.dd,p.nascimento.mm,p.nascimento.yyyy);
}

int main(){
	Dia nascimento ={ 7,12,1995};
	
	Pessoa lucas = {"Lucas ", nascimento};
	
	exibirPessoa(lucas);
	
	return 0;
}
