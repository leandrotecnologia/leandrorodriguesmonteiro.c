#include <stdio.h>

int main (){
 char nomeObra[10];
 int inicioObra;
 int fimObra;
 int codObra;
 int tempo;
 	

printf("informe o nome da obra: \n");
scanf("%s",&nomeObra);
fflush(stdin);

printf("Informe o mes de inicio da obra:");
scanf("%d",&inicioObra);

printf("Informe o mes de termino da obra:");
scanf("%d",&fimObra);

printf("Informe o codigo de situacao atual: ");
scanf("%d",&codObra);

tempo = fimObra - inicioObra;

system("cls");
printf("Nome da obra:%s \n",nomeObra);
if(codObra == 5)
   printf("Situacao: Falta de materias \n");
if(codObra == 1)
  printf("Situacao: obra concluida \n");

printf("Tempo de execucao: %d meses \n",tempo);
  



	



return 0;
}
