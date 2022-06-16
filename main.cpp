#include <iostream>
using namespace std;

// Sorts array a[0..n-1] using Cocktail sort
void CocktailSort(int a[], int n)
{
    bool swapped = true;
    int start = 0;
    int end = n - 1;
    int temp;

    while (swapped==true)
    {
        // restablecer Flag de swap al entrar en el bucle,
        //porque podría ser cierto desde una iteración anterior.
        swapped = false;

        // bucle de izquierda a derecha igual que la ordenación de burbujas
        for (int i = start; i < end; ++i)
        {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = true;
            }
        }

        //si no se mueve nada, entonces el array se ordena.
        if (!swapped)
            break;

        // de lo contrario, restablece la bandera intercambiada para
        // que pueda ser utilizada en la siguiente etapa
        swapped = false;

        // retroceder el punto final en uno, porque el elemento del
        // final está en su lugar correcto
        --end;

        // de derecha a izquierda, haciendo la misma comparación que
        // en la etapa anterior
        for (int i = end - 1; i >= start; --i)
        {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = true;
            }
        }

        // aumentar el punto de partida, ya que la última etapa habría
        // desplazado el siguiente número más pequeño al lugar que le corresponde.
        ++start;
    }
    // Imprime la matriz
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}



// Driver code
int main()
{
    int a[] = { 1522425, 10, 5, 6, 165, 1, 84,56,1523 };
    // sizeof() es un metodo que devuelve el número de bytes que se utilizan para almacenar un tipo de dato
    // Tamaño en bytes de un int es igual a 4
    int n = sizeof(a)/sizeof(a[0]);
    // De esta forma se halla el length o size de un array en C++
    CocktailSort(a,n);
    return 0;
}