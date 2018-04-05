#include <stdio.h>
#include <stdlib.h>
int pedirNumeroPar();
int getEntero(char* mensaje,char* mensajeError, int maximo, int minimo);
int main()
{
    int edad;
    edad=getEntero("Ingrese su edad", "Error, la edad debe estar entre 1 y 199." ,199,1);
    printf("Su edad es: %d",edad);
    return 0;
}
int getEntero(char* mensaje,char* mensajeError, int maximo, int minimo)
{
    int retorno=-1;
    do
    {
        printf("%s :",mensaje);
        scanf("%d",&retorno);
        if(retorno<maximo && retorno>minimo)
        {
            break;
        }
        printf("%s \n",mensajeError);
    }while(1==1);

    return retorno;
}

int pedirNumeroPar()
{
    int resultado=1;
    int numero;
    printf("Ingrese un numero par: ");
    scanf("%d",&numero);
    if(numero%2==0)
    {
        resultado=0;
    }
    return resultado;
}
