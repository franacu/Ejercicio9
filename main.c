#include <stdio.h>

int main()
{
    int longitud = 0;                // variable para almacenar la longitud

    char cadena[] = "Hola, mundo!";  // cadena de caracteres
    char *puntero = cadena;          // puntero que apunta al primer carácter

    while (*puntero != '\0') {       // mientras no se alcance el carácter nulo
        longitud++;                  // incrementa la longitud
        puntero++;                   // avanza el puntero al siguiente carácter
    }

    printf("La longitud de la cadena es: %d\n", longitud);

    return 0;
}