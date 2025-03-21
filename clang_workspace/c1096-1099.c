#include <stdio.h>

int main() {
    //1096
    // int n;
    // scanf("%d", &n);
    // int arr[19][19] = {};
    // int i, j;
    // for (i = 0; i < n; i++) {
    //     int x, y;
    //     scanf("%d %d", &x, &y);
    //     arr[x-1][y-1] = 1;
    // }
    // for (i = 0; i < 19; i++) {
    //     for (j = 0; j < 19; j++) {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    //1097
    // int n, i, j, x, y;
    // scanf("%d", &n);
    // int arr[19][19] = {};
    // for (i = 0; i < 19; i++) {
    //     for (j = 0; j < 19; j++) {
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // for (i = 0; i < n; i++) {
    //     scanf("%d %d", &x, &y);
    //     for (j = 0; j < 19; j++) {
    //         arr[x-1][j] ^= 1;
    //         arr[j][y-1] ^= 1;
    //     }
    // }
    // for (i = 0; i < 19; i++) {
    //     for (j = 0; j < 19; j++) {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    //1098
    // int h, w, n, l, d, x, y, i, j;
    // scanf("%d %d", &h, &w);
    // scanf("%d", &n);
    // int arr[h][w];
    // for (i = 0; i < h; i++) {
    //     for (j = 0; j < w; j++) {
    //         arr[i][j] = 0;
    //     }
    // }
    // for (i = 0; i < n; i++) {
    //     scanf("%d %d %d %d", &l, &d, &x, &y);
    //     x -= 1;
    //     y -= 1;
    //     for (j = 0; j < l; j++) {
    //         arr[x][y] = 1;
    //         if (d) x += 1; // 세로
    //         else   y += 1; // 가로
    //     }
        
    // }
    // for (i = 0; i < h; i++) {
    //     for (j = 0; j < w; j++) {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    //1099
    int i, j;
    int arr[10][10] = {0};
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    i = j = 1;
    while (arr[i][j] == 0 || arr[i][j] == 2) {
        if (arr[i][j] == 2) {
            arr[i][j] = 9;
            break;
        }
        arr[i][j] = 9;
        if (arr[i][j+1] != 1) {
            j++;
        } else if (arr[i+1][j] != 1) {
            i++;
        }
    }
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}