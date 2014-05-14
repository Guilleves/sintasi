#include<stdio.h>
#include<string.h>
#include<ctype.h>

char *carga(int *);
char *cambia_texto(char*, int);

int main(){
    int n;
    char *texto;
    char *textoNuevo;
    printf("Ingrese el texto\n\n");

    texto = carga(&n); /*le paso la direccion de n, porque carga asigna un valor al contenido de n adentro*/
    textoNuevo = cambia_texto(texto, n);

    printf("El texto %s cambiado se lee %s", texto, textoNuevo);
    return 0;
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

char* cambia_texto(char* t, int n){
    static char textoNuevo[1000];
    strcpy(textoNuevo, t); /*copio el texto original en otro texto para modificacion*/
    int i = 0;

    for (i=0; i<n; i++){
        if (isdigit(t[i]) != 0) /*pregunto si es un digito*/
            textoNuevo[i] = '*';}
    return(textoNuevo);
    }
