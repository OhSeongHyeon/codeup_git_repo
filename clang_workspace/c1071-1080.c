#include <stdio.h>

int main()
{
    //1071
    // int n;
    // repeat:
    // scanf("%d", &n);
    // if (n == 0) return 0;
    // printf("%d\n", n);
    // if (n != 0) goto repeat;

    //1072
    // int n, m;
    // scanf("%d", &n);
    // reget:
    // scanf("%d", &m);
    // if(n == 0) return 0;
    // printf("%d\n", m);
    // if(n-- > 0) goto reget;

    //1073
    // int n = 1;
    // while (n)
    // {
    //     scanf("%d", &n);
    //     if (n == 0) continue;
    //     printf("%d\n", n);
    // }

    //1074
    // int n;
    // scanf("%d", &n);
    // for (int i = n; i > 0; i--)
    // {
    //     printf("%d\n", i);
    // }
    
    //1075
    // int n;
    // scanf("%d", &n);
    // for (int i = n-1; i >= 0; i--)
    // {
    //     printf("%d\n", i);
    // }

    //1076
    // char c, t = 'a';
    // scanf("%c", &c);
    // do
    // {
    //     printf(t <= c ? "%c " : "%c", t++);
    // } while (t <= c);

    //1077
    // int n;
    // scanf("%d", &n);
    // for (int i = 0; i <= n; i++)
    // {
    //     printf("%d\n", i);
    // }

    //1078
    // int n;
    // scanf("%d", &n);
    // int sum = 0;
    // for(int i = 1; i <= n; i++)
    // {
    //     if(i%2 == 0) sum += i;
    // }
    // printf("%d", sum);

    //1079
    // char c;
    // do
    // {
    //     scanf("%c", &c);
    //     printf("%c", c);
    // } while (c != 'q');

    //1080
    int t;
    scanf("%d", &t);
    int sum = 0;
    int i = 1;
    while (sum < t)
    {
        sum += i++;
    }
    printf("%d", i-1);

    return 0;
}