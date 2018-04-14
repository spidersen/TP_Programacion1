#include <stdio.h>
#include <stdlib.h>

void menu(); // Menu de opciones
float a, b;
float suma(float a, float b); // Funcion sumar dos numeros
float resta(float a, float b); // Funcion restar dos numeros
float multiplicar(float a, float b); // Funcion multiplicar dos numeros
float dividir(float a, float b); // Funcion dividir dos numeros
float factorial(float a);
void main()
{
  int opc;
  float a, b, fact1;
  char c;

  printf ("\nIntruduce el primer operando:\n");
  scanf  ("%f", &a);
  printf ("\nIntroduce el segundo operando:\n");
  scanf  ("%f", &b);

  do
    {
    menu();
    scanf("%d",&opc);
    switch(opc)
    {
      case 1:

        printf("La suma de %f y %f es: %f\n\n", a, b, suma(a, b));
        break;

      case 2:

        printf("La resta de %f y %f es: %f\n\n", a, b, resta(a, b));
        break;

      case 3:

        printf("La multiplicacion de %f y %f es: %f\n\n", a, b, multiplicar(a, b));
        break;

      case 4:

        printf("La division entre %f y %f es: %f\n", a, b, dividir(a, b));
        break;

      case 5:

        fact1 = factorial(a);
        printf("El factorial de %f es: %f\n ",a, factorial(a));
        break;

      case 0: break;
      default:
        printf("\nIntroduce una opción valida...");
    }
  } while (opc != 0);
}

void menu()
{
  printf ("\nIntroduce una opcion de las siguientes:\n");
  printf ("1.- Calcular la Suma\n");
  printf ("2.- Calcular la Resta\n");
  printf ("3.- Calcular la Multiplicacion\n");
  printf ("4.- Calcular la Dividision\n");
  printf ("5.- Calcular el Factorial\n");
  printf ("0.- Salir\n");
  printf ("Opcion: ");
}





float suma(float a, float b)
{
  return a+b;
}

float resta(float a, float b)
{
  return a-b;
}

float multiplicar(float a, float b)
{
  return a*b;
}

float dividir(float a, float b)
{
  return a/b;
}

float factorial(float a)
{
    int auxa, cont;
    auxa = 1;


    for(cont = 1; cont <= a; cont++)
    {
        auxa = auxa * cont;

    }

  return auxa;
}
