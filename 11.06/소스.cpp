#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define num_flip 10000
#define coin_Fwd_Bwd 2
#define coin_Fwd_Status
#define coin_Bwd_Status
#define END_COND 999

#define PLAYER_WIN 11
#define PLAYER_LOSE 12
#define DRAW 13

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
   
    while (1)
    {
        nRes = ((unsigned int)(nNum) % (nRange));


        if ((nRes == coin_Fwd_Status) || (nRes == coin_Fwd_Bwd))
        {
            printf(format"nRes:%d\n", nRes);
            break;
        }
    }
    return nRes;
}


// main function loop
int main(void)
{
    // assigning seed
    GenRandSeed();

    // initializing variables
    int nNumSumFwdFlip = 0;
    int nNumSumBwdFlip = 0;
    double dVarFwdFlip = 0.0;
    double dVarBwdFlip = 0.0;
    double dstdevfwdflip = 0.0;
    double dstdevbwdflip = 0.0;
 

    // finite loop
    for(unsigned int i=0; i<num_flip; i++)
    {
       
        // generating the random number, flipcoin, 0fwd 1bwd
        unsigned int nstatusflipcoin = GenRandNum(ROCK_PAPER_SCISSORS);

      

        // printing result
        switch (nstatusflipcoin)
        {
            case coin_Fwd_Status
            {
                nNumSumFwdFlip++;
                break;
            }

            case coin_Bwd_Status:
            {
                nNumSumBwdFlip++;
                break;
            }
            default
            {
                printf("다시시도");
            }
        }

    }
    //결과값 출력
    printf("summation reult : (FWD,BWD):(%d,%d)\n", nNumSumFwdFlip, nNumSumBwdFlip);
    printf("probability: (FWD,BWD):(%.2lf,%.2lf)\n"
    return 0;
}
