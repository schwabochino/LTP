/*Philipp Schwarberg*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wert1 = 7, wert2=5, wert3 = 10;
    if (wert1 < wert2 < wert3) printf("%d\n", wert2); //Wert wird ausgegeben weil wert2 < wert3 und somit wahr

    //3.04
    printf("Wert f�r wahr: %d\t Wert f�r falsch: %d\n", 2<3, 7!=7);
return 0;
}
