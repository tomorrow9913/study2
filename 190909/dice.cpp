#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int DiceMax = 100000;
const int dice = 6;

int main() {
    srand(time(NULL));

    int arr[dice+ 1] = {0};

    for (int i = 0; i < DiceMax; i++) {
        int random = rand() % dice + 1;
        arr[random]++;

        printf("[%06d] �ֻ��� ���� %d\n", i+1, random);
    }

    for(int i = 1; i <= dice; i++) {
        printf("%d�� %d�� ���Խ��ϴ�.\n", i, arr[i]);
    }

    return 0;
}