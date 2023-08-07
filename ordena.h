#include "varGlobais.h"

void ordena (struct ficha aluno[]){

  int i, pos,posi, troca, trocapos;
  char troquei;

  for (i=0;i<TAM;i++){
     aluno[i].posicao = i;
     aluno[i].mediaord = aluno[i].media;
  }
  troquei = 's';
  while (troquei == 's'){
    troquei = 'n';
    for (i=0;i<TAM;i++){
      if (aluno[i].mediaord < aluno[i+1].mediaord){
        troca = aluno[i].mediaord;
        aluno[i].mediaord = aluno[i+1].mediaord;
        aluno[i+1].mediaord = troca;
        trocapos = aluno[i].posicao;
        aluno[i].posicao = aluno[i+1].posicao;
        aluno[i+1].posicao = trocapos;
        troquei = 's';
        
      }
      
    }
    
  }
  
}