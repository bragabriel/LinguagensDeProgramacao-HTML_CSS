#include <stdio.h>

struct horario{
		int *pHora;
		int *pMinuto;
		int *pSegundo;
	};

int main(){
	
	struct horario hoje;
	
	int hora = 200;
	int minuto = 300;
	int segundo = 400;
	
	hoje.pHora = &hora;
	hoje.pMinuto = &minuto;
	hoje.pSegundo = &segundo;
	
	printf("Hora - %d\n", *hoje.pHora);
	printf("Minuto - %d\n", *hoje.pMinuto);
	printf("Segundo - %d\n", *hoje.pSegundo);
	
	*hoje.pSegundo = 1000; //onde hoje.pSegundo aponta, recebe 1000
	
	printf("Segundo - %d\n", *hoje.pSegundo);
	
	
	
	return 0;
}
