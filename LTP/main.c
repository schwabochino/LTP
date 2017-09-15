#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <math.h>
#define MAX 20

struct spielerListe
{
    char nickName[256];
    struct spielerListe *next;
};

int main()
{
    printf("\t++++LanTurnierPlaner++++\n");
    int i;
    int diceRoll;
        srand(time(NULL));

    /*for(i=0; i<20; i++)
    {
            diceRoll = (rand()%6)+1;
            printf("%d\n", diceRoll);

    }*/

    return 0;
}
