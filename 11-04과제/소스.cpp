#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Rock_Paper_Scissors 3
#define ROCK 0
#define PAPER 1
#define SCISSORS 2
#define INITSTATUS 100
#define END_COND 999

// generating the seed number using the time clock information
void GenRandSeed()
{
    // generating the random number using the time seed
    srand((unsigned int)(time(NULL)));
    return;
}

// generating the random number
unsigned int GenRandNum(unsigned int nRange)
{
    unsigned int nRes = 0;
    unsigned int nNum = rand();
    nRes = ((unsigned int)(nNum) % (nRange));
    return nRes;
}

//initializing variabies
unsigned int Ncomrus = INITSTATUS;
unsigned int NplayerRps = INITSTATUS;

int main(void)
{
    int nRange = 0;

    //infinite loop
    while (1)
    {
        printf("Input (rock :0, paper :1, scissors:2):\n");
        printf("if you want to end the loop, please input 999\n");
        scanf_s("%d", &NplayerRps);

        if (NplayerRps == END_COND)
        {
            printf("end of the infinite while loop rps game..\n");
            break;
        }

        if ((NplayerRps < 0) || (NplayerRps >= Rock_Paper_Scissors))
        {
            printf("check your input condition\n");
            continue;
        }

        unsigned int nComRps = GenRandNum(nRange = Rock_Paper_Scissors);

        printf("player, computer):(%d,%d)\n\n", NplayerRps, nComRps);

    }



    system("pause");
    return 0;
}