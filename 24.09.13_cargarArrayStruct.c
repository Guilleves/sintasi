#include<stdio.h>

struct palcalif{char pala[20]; int cantidad;};

struct palcalif *cargaPalabras(int *);

void main(){
    int n;
    struct palcalif *palabras;

    printf("ingresar palabras\n\n");
    palabras = cargaPalabras(&n);}



struct palcalif *cargaPalabras(int *n){
	static struct palcalif conjuntoPalabras[1000];
	int i = 0, j = 0; /*i se mueve en los lugares de la struct y j en los de la palabra*/
	char rta;

	while (rta != 'n' && i<999){
		j = 0;
		while ((conjuntoPalabras[i].pala[j] = getchar()) != EOF && j<20){
			j++;
		conjuntoPalabras[i].pala[j] = '\0';
		printf("la palabra ingresada fue %s\n\n", conjuntoPalabras[i].pala);
		i++;
		printf("Desea continuar ingresando palabras?");
		scanf("%c", &rta);
		}
	}
	*n = i;
	return(conjuntoPalabras);
}
