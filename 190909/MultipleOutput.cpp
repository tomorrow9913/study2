#include <stdio.h>

int main() {
    int input, cnt;
    scanf("%d", &input);
    scanf("%d", &cnt);
    
    for (int i = 1; i <= cnt; i++) {
        printf("%2d * %2d = %3d\n", input, i, input * i);
    }

    return 0;
}