/*Faca um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2. Considere uma turma de ate 10 alunos. Apos ler todos os dados digitados, e depois de armazena-los em um vetor de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias 
finais (use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).*/

#include <stdio.h>
#include "entraDados.h"
#include "processaDados.h"
#include "exibiDados.h"
#include "ordena.h"
int main(void) {

  struct ficha aluno[TAM];

  
  entraDados (aluno);//recebi dados dos alunos
  processaDados (aluno);//processa os dados
  ordena(aluno);//processa o vetor media ordenado
  exibiDados (aluno);//exibi os dados processados
  
  }

  


