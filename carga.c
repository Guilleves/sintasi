#include<stdio.h>

char* carga(int*);

void main(){
    int n;
    char *texto;
    
    printf("Ingrese el texto\n\n");
    texto = carga(&n);
    
    printf("el texto es %s", texto);

    }

char* carga(int* n){
    static char texto[1000];
    int i = 0;

    while ((texto[i] = getchar()) != EOF && i<999)
        i++;
        
    texto[i] = '\0';
    *n = i;

    return(texto);
    }


