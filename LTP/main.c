/*Philipp Schwarberg*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <math.h>

//Liste der Spieler
struct spielerListe
{
    char nickName[256];
    int punkte;
    struct spielerListe *next;

};
//Liste der Spiele
struct gameListe
{
    char gameTitel[256];
    int anzahlSpieler;
    struct gameListe *next;
};
//Zufallsgenerator -> muss verbessert werden?
int zufall()
{
            int diceRoll = 0;
            diceRoll = (rand()%6)+1;
            printf("%d\n", diceRoll);
}
int main()
{
    int durchlauf = 0;
    printf("\t++++LanTurnierPlaner++++\n");
    printf("Anazhl der Turnierteilnehmer: " ); //aus den Eingaben auswerten! Wenn 8 Spieler eingegeben dann muss das Proramm schon wissen das es 8 Teilnehmer gibt.
    scanf("%i", &durchlauf);
    for (i=0; i<durchlauf; i++)
        spielerListe;

    fflush(stdin);
    return 0;
}
