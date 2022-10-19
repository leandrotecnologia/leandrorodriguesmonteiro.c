#include <stdio.h>

int main (){
	
	
char opcao;	
int num;

printf("Escolha a questao a ser executada 'A' 'B' ou 'C': \n");
scanf("%c",&opcao);

if(opcao == 'a'){
	num = 1;
}
if(opcao == 'b'){
	num = 2;
}
if(opcao == 'c'){
	num = 3;
}

switch(num){
	case 1:
	printf(" opcao escolhida A");
	break;
	
	case 2:
	printf(" opcao escolhida B");
	break;
	
    case 3:
	printf(" opcao escolhida C");
	break;
	
		
	default:
		printf("opcao invalida");
}

return 0;

}
