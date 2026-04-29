#include <stdio.h>

int main()
{
    int money = 0, A = 0, B = 0, C = 0, flag = 0;
    scanf("%d", &money);

    int x = money / 900, y = 0, z = 0;
    for (int i = 0; i <= x; i++) {
        if (money - 900 * i > 0)
            A ++;

        y = (money - 900 * A) / (750 * 2);
        B = 0;
        for (int j = 0; j <= y; j++) {

            if (money - 750 * 2 * j > 0)
                B += 2;

            z = money - 900 * A - 750 * B;

            C = z / 200;
            if (z % 200 == 0 && C > 0 && (C < A || C < B)) {
                printf("%d %d %d\n", A, B, C);
                flag = 1;
            }
        }
    }

    if (flag == 0)
        printf("none");

    return 0;
}
