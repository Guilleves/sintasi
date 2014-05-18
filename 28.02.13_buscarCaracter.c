#include <stdio.h>
#include <string.h>

struct info {char *text; int longitud;};

char *carga(int *);
struct info busca(char *, int, char);

void main() {
	int n;
	char *texto;
	char car;
	struct info resultado;

	printf("Ingrese el texto\n\n");
	texto = carga(&n);

	printf("Ingrese un caracter\n\n");
	scanf("%c", &car);

	resultado = busca(texto, n, car);

	if (resultado.text != NULL){
		printf("El texto modificado queda: \n\n%s", resultado.text);
		printf("La longitud del texto modificado es: \n%i", resultado.longitud);
	}
	else
		printf("El caracter ingresado no estaba en el texto");
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

struct info busca(char *t, int n, char car){
	struct info cadena;

	cadena.text = strchr(t, car);

	if (strchr(t, car) != NULL)
		cadena.longitud = strlen(cadena.text);

	return(cadena);
}
