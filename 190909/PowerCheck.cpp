#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);

    int i = 1, result = 0; 
    while(i * i <= input) {
        if(i*i == input) {
            result = i;
            break;
        }
        i++;
    }

    if (result) {
        printf("%d´Â %dÀÇ °ÅµìÁ¦°ö\n", input, result);
    }
    else {
        printf("%d´Â(Àº)) °ÅµìÁ¦°öÀÌ ¾Æ´Õ´Ï´Ù\n", input);
    }
}