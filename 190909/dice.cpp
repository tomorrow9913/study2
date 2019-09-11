#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int throwDiceMax = 100000;
const int diceMax = 6;
const int diceMin = 1;

int main() {
    srand(time(NULL));

    int arrDiceCnt[diceMax+ 1] = {0};
    
    for (int i = 0; i < throwDiceMax; i++) {
        int random;
        
        random = rand() % diceMax + diceMin;
        arrDiceCnt[random]++;

        printf("[%06d] �ֻ��� ���� %d\n", i+1, random);
    }
    
    double percentageNum[diceMax + 1] = {0};
    for (int i = diceMin; i <= diceMax; i++) {
        percentageNum[i] = ((double)arrDiceCnt[i] / throwDiceMax) * 100;
    }

    for(int i = 1; i <= diceMax; i++) {
        printf("%d �� %d�� ���Խ��ϴ�. (%.2lf %%)\n", i, arrDiceCnt[i], percentageNum[i]);
    }

    return 0;
}