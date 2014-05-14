#include<stdio.h>
#include<string.h>
#include<ctype.h>

char* carga(int*);
char* cambia_texto(char*, int);

void main(){
    int n;
    char* texto, textoNuevo;
    printf("Ingrese el texto\n\n");

    texto = carga(&n);
    textoNuevo = cambia_texto(texto, n);

    printf("El texto %s cambiado se lee %s", texto, textoNuevo);
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

char* cambia_texto(char* t, int n){ /* si el caracter es un numero lo cambio a un asterisco y muestro ambos textos al final */
    static char textoNuevo[1000];
    strcpy(textoNuevo, t);
    int i = 0;

    for (i=0; i<n; i++){
        if (isdigit(t[i]) != 0)
            textoNuevo[i] = "*";}
    return(textoNuevo);
    }
