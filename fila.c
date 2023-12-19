#include <stdio.h>
#include <stdlib.h>

#define N 3

typedef struct  {
  int fila[N]; // declara vetor com capacidade igual a N
  int contador;
} tipo_fila;


//Prototipação

void insereFila(tipo_fila *fl, int valor);

void imprimeFila(tipo_fila fl);

int removeFila(tipo_fila *fl); // precisa retornar um valor 

int removeDuplo(tipo_fila *fl); // precisa retornar um valor 




int main() {

  tipo_fila fila;

  fila.contador = 0;


  insereFila(&fila, 97);

  insereFila(&fila, 13);

  insereFila(&fila, 17);

  imprimeFila(fila);

  printf("\nO valor removido da fila foi: %d\n", removeFila(&fila));
  
  imprimeNovaFila(fila);

  return 0;
}


//Procedimento que insere elemento na fila 

void insereFila(tipo_fila *fl, int valor) {
    if (fl->contador < N) {
        
            fl->fila[fl->contador] = valor;
            fl->contador++;
        }


     else {
        printf("ERRO 777: A fila está cheia.\nNão foi possível inserir o valor %d na fila.\n", valor);
    }
}

void imprimeFila(tipo_fila fl){

  printf("\nFILA: [");
  for(int i=0; i < fl.contador; i++) {
    printf("%d\t", fl.fila[i]);
  }
  printf("]\n");

     printf("O valor de contador eh: %d\n", fl.contador);

}

int removeFila(tipo_fila *fl) {
  int valor;
  if(fl->contador == 0){
    printf("ERRO: A fila está vazia, não é possível remover nada");
      return -1;
  }
  else {
    valor = fl->fila[0]; 
    for(int i = 0; i < fl->contador - 1; i++){
      fl->fila[i] = fl->fila[i+1];
    }

    fl->contador--;
    return valor;
  } 
}






 
