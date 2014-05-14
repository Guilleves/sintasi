#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct modif { char *textOriginal; char *textNew; int cantidad; };

char *carga(int *);
struct modif *modifica(char *, int, char, char);


int main(){
    int n;
    char *texto;
    char c, cr;
    struct modif *resultado;
    printf("Ingrese el texto\n\n");

    texto = carga(&n);
    printf("Texto ingresado: %s ", texto);

    printf("ingrese el caracter a reemplazar\n");
    scanf("%c\n\n", &c);
    printf("ingrese el caracter de reemplazo\n");
    scanf("%c\n\n", &cr);

    resultado = modifica(texto, n, c, cr);
    printf("el texto era %s, se transformo en %s y se hicieron %d reemplazos", resultado->textOriginal, resultado->textNew, resultado->cantidad );

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

struct modif *modifica(char *t, int n, char cAReemp, char cReemp){ /*la struct tiene que tener el texto original y el reemplazado*/
    int i, c = 0;
    struct modif reemplazos;
    reemplazos.textOriginal = t;
    reemplazos.textNew = t;
    for (i = 0; i<n; i++)
        if (t[i] == cAReemp){
            reemplazos.textNew[i] = cReemp;
            c++;
        }
    reemplazos.cantidad = c;
    return (&reemplazos);
    };


