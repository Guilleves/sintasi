#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct modif { char textOriginal[1000]; char textNew[1000]; int cantidad; };

char *carga(int *);
struct modif *modifica(char *, int, char, char);
char *busca(char *, int);



int main(){
    int n;
    char *texto;
    char *textoCortado;
    char c, cr;
    struct modif *original;
    struct modif *resultado;
    printf("Ingrese el texto\n\n");

    texto = carga(&n);
    printf("Texto ingresado: %s \n", texto);
    printf("long del texto: %i\n\n", n);

    strcpy(original->textOriginal, texto);

    /*OPCION 1- MODIFICA*/
    printf("ingrese el caracter a reemplazar\n");
    scanf("%c\n\n", &c);
    printf("ingrese el caracter de reemplazo\n");
    scanf("%c\n\n", &cr);

    resultado = modifica(texto, n, c, cr);
    printf("el texto era %s, se transformo en %s y se hicieron %d reemplazos\n\n\n\n", resultado->textOriginal, resultado->textNew, resultado->cantidad );

/*-----------------------------------------------------------------------------------------------------------------------------------------------*/

    /*OPCION 2- CUENTA (NO SE PROGRAMA*/

    /*OPCION 3- BUSCA*/
    textoCortado = busca(texto, n);

    if (textoCortado != NULL){
        printf("Habiendo cortado el texto, quedo: %s\n", textoCortado);
        printf("Y la direccion donde se encuentra la primer ocurrencia del caracer en el texto es: %i", &textoCortado);
    }
    else
        printf("Ese caracter no estaba en el texto");
/*----------------------------------------------------------------------------------------------------------------------------------------------*/
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
	printf("Ingrese un caracter a buscar\n");
	scanf("%c", &c);
	textoCortado = strchr(t, c);

	return(textoCortado);
}
