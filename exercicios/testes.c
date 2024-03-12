#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int display(int var, int *ptr){
    printf("conteudo de var: %d\n", var);
    printf("endereco de var: %p\n", &var);
    printf("conteudo apontado por ptr: %d\n", *ptr);
    printf("conteudo de ptr: %p\n", ptr);
    printf("endereco de ptr: %p\n", &ptr);
}

void update(int *ptr){
    *ptr = *ptr + 1;
}

int main(){
    int var = 8;
    int *ptr;

    ptr = &var;

    display(var, ptr);

    printf("\n\nmudando o valor de var por meio do ponteiro\n\n");

    update(&var);

    display(var, ptr);

}