#include <stdio.h>
#include <string.h>

struct modif {char *text; int cantidad;};

char *carga(int *);
struct modif *reemplaza(char *, int n, char, char);

void main(){
	int n;
	char *texto;
	char c, cr;
	struct modif *resultado;

	printf("Ingrese el texto \n\n");
	texto = carga(&n);

	printf("Ingrese el caracter a reemplazar\n");
	scanf("%c", &c);
	printf("Ingrese el caracter de reemplazo\n");
	scanf("%c", &cr);

	resultado = reemplaza(texto, n, c, cr);

	printf("En el texto ingresado %s se realizaron %i reemplazos", resultado->text, resultado->cantidad);
}

char *carga(int *n){
	static char texto[1000];
	int i = 0;
	while ((texto[i] = getchar()) != EOF && i<999)
		i++;
	texto[i] = '\0';

	*n = i;
	return(texto);
}

struct modif *reemplaza(char *t, int n, char c, char cr){
	int i = 0;
	int contador = 0;
	static struct modif reemplazos;

	for (i = 0; i<n; i++){
		if (t[i] == c){
			t[i] = cr;
			contador++;
		}
	}

	reemplazos.text = t;
	reemplazos.cantidad = contador;

	return(&reemplazos);
}
