//Exibi os dados dos alunos

#include "varGlobais.h"

void exibiDados(struct ficha aluno[]){

int i, j;

printf("\n** Escola Tabajara **");
printf("\n-----------------------------");  
printf("\nComputados os alunos");
printf("\nNome         Media");
for (i=0; i<TAM; i++){

   printf("\n%s\t\t\t %.2f", aluno[i].nome, aluno[i].media);
  
}
printf("\n-----------------------------");  
printf("\nClassificacao final");
printf("\nNome         Media       Status");
for (i=0; i<TAM; i++){
   j = aluno[i].posicao;
   printf("\n%s\t\t\t %2.2f\t\t %2.d º", aluno[j].nome, aluno[i].mediaord, i+1);
  
} 
  
}