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
        printf("%d�� %d�� �ŵ�����\n", input, result);
    }
    else {
        printf("%d��(��)) �ŵ������� �ƴմϴ�\n", input);
    }
}