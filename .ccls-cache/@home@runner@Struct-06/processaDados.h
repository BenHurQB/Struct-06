//calcula a media das notas da turma


#include "varGlobais.h"

void processaDados (struct ficha aluno[]){

 int i;

  for(i=0;i<TAM;i++){

    aluno[i].media = (aluno[i].n1 + (aluno[i].n2*2))/3; 
  }


  
}