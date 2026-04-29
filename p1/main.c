#include <stdio.h>
#include <stdbool.h>

int main()
{
    int money = 0, A = 0, B = 0, C = 0, exist = false;
    scanf("%d", &money);

    for (int i = money - 900; i >= 0; i -= 900) {
        A ++;
        B = 0;
        for (int j = i - 1500; j >= 0; j -= 750 * 2) {
            B += 2;
            C = 0;
            for (int k = j - 200; k >= 0; k -= 200) {
                C += 1;
                if (k == 0 && (C < A || C < B)) {
                    printf("%d %d %d\n", A, B, C);
                    exist = true;
                }
            }
        }
    }

    if (!exist)
        printf("none");

    return 0;
}
