#include <stdio.h>
#include <stdbool.h> // 엣날 버전이라 적었습니다.

int main()
{

    int money = 0;
    bool exist = false;
    scanf("%d", &money);

    int sum = 0;
    for (int x = 1; x < money / 900; x++) {
        for (int y = 2; y < money / 750; y+=2) {
            for (int z = 1; z < money / 200; z++) {
                sum = 900 * x + 750 * y + 200 * z;
                if (sum == money && (z < x || z < y)) {
                    printf("%d %d %d\n", x, y, z);
                    exist = true;
                }
            }
        }
    }

    if (!exist)
        printf("none");

    return 0;
}
