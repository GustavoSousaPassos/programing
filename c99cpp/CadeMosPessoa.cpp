#include <stdio.h>
#include <locale.h>
#include <string.h>

struct person
{
	char name[50];
	int pNum;
	char address[50];
	
	void signIn(struct person cPe[3])
	{
		printf("Número de telefone")
		scanf("%d", &pNum);
	}
};

struct person cPe[3];

void insertPerson()
{
	struct person p;
	p.signIn();
	
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int opc;
	
	
	puts("[1] Cadastrar/n[2] Mostrar");
	scanf("%d", &opc);
	
	switch(opc)
	{
		case 1: 
		{
			struct person p;
			p.signIn(cPe);
		}
	}
}
