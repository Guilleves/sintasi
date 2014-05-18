#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct modif { char *textOriginal; char *textNew; int cantidad; };

char *carga(int *);
struct modif *modifica(char *, int, char, char);



int main(){
    int n;
    char *texto;
    char c, cr;
    struct modif *original;
    struct modif *resultado;
    printf("Ingrese el texto\n\n");

    texto = carga(&n);
    printf("Texto ingresado: %s ", texto);

    strcpy(original->textOriginal, texto);

    printf("ingrese el caracter a reemplazar\n");
    scanf("%c\n\n", &c);
    printf("ingrese el caracter de reemplazo\n");
    scanf("%c\n\n", &cr);

    resultado = modifica(texto, n, c, cr);
    printf("el texto era %s, se transformo en %s y se hicieron %d reemplazos", original->textOriginal, resultado->textNew, resultado->cantidad );

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

struct modif *modifica(char *t, int n, char charAReemplazar, char cReemplazo){ /*la struct tiene que tener el texto original y el reemplazado*/
    int i, c = 0;
    static struct modif reemplazos;

    strcpy(reemplazos.textOriginal, t);
    strcpy(reemplazos.textNew, t);

    for (i = 0; i<n; i++){
        if (reemplazos.textNew[i] == charAReemplazar){
            reemplazos.textNew[i] = cReemplazo;
            c++;
        }
    }
    reemplazos.cantidad = c;
    return (&reemplazos);
    };

char *busca(char *t, int n){
	char c;
	static char *textoCortado;
	printf("Ingrese un caracter a buscar");
	scanf("%c", &c);
	textoCortado = strchr(t; c);
	if (strchr(t, c) != NULL)
		return(textoCortado);
}

