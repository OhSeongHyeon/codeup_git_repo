#include <stdio.h>

int main()
{
    // 1081
    //  int a, b;
    //  scanf("%d %d", &a, &b);
    //  for (int i = 1; i <= a; i++)
    //  {
    //      for (int j = 1; j <= b; j++)
    //      {
    //          printf("%d %d\n", i, j);
    //      }
    //  }

    // 1082
    //  int h, i;
    //  scanf("%x", &h);
    //  for (i = 1; i <= 0x0f; i++)
    //  {
    //      printf("%X*%X=%X\n", h, i, h*i);
    //  }

    // 1083
    //  int n;
    //  scanf("%d", &n);
    //  for (int i = 1; i <= n; i++)
    //  {
    //      printf(i%3!=0 ? "%d" : "X", i);
    //      printf(i<n ? " " : "");
    //  }

    // 1084
    // int i, j, k, c = 0;
    // int r, g, b;
    // scanf("%d %d %d", &r, &g, &b);
    // for (i = 0; i < r; i++)
    // {
    //     for (j = 0; j < g; j++)
    //     {
    //         for (k = 0; k < b; k++)
    //         {
    //             printf("%d %d %d\n", i, j, k);
    //             c++;
    //         }
    //     }
    // }
    // printf("%d", c);

    // 1085
    // int h, b, c, s;
    // scanf("%d %d %d %d", &h, &b, &c, &s);
    // printf("%.1f MB", (float)h * b * c * s / (1 << 23));

    // 1086
    // int w, h, b;
    // scanf("%d %d %d", &w, &h, &b);
    // printf("%.2f MB", (float) w*h*b/(1<<23));

    //1087
    // int n, i, s = 0;
    // scanf("%d", &n);
    // for (i = 1; i <= n; i++) {
    //     s += i;
    //     if (s >= n) break;
    // }
    // printf("%d", s);

    //1088
    // int n;
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i%3 == 0) continue;
    //     printf("%d ", i);
    // }
    
    //1089
    // int a, d, n;
    // scanf("%d %d %d", &a, &d, &n);
    // printf("%d", a + (d * (n-1)));

    //1090
    long long int a, r, n;
    scanf("%lld %lld %lld", &a, &r, &n);
    while (n-- > 1) {
        a *= r;
    }
    printf("%lld", a);

    return 0;
}