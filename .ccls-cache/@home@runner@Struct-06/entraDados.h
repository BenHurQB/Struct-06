//recebi os dados dos alunos
#include "varGlobais.h"


void entraDados( struct ficha aluno[]){
 
  int cont;
  cont = 0;
  printf("\n** Escola Tabajara **");
  printf("\n-----------------------------");
  while ( cont < TAM){
    printf("\n  Informe os dados do %d º aluno:", cont+1);
    printf("\n-----------------------------");
    printf("\n  Informe a matricula : ");
    scanf(" %d", &aluno[cont].matricula);
    printf("\n  Informe o nome do aluno: ");
    scanf(" %s", aluno[cont].nome);
    printf("\n  Informe o codigo da disciplina: ");
    scanf(" %d", &aluno[cont].disciplina);
    printf("\n  Informe a primeira nota: ");
    scanf(" %f", &aluno[cont].n1);
    printf("\n  Informe a segunda nota: ");
    scanf(" %f", &aluno[cont].n2);
    cont = cont + 1;
    
    }
   
  }
  