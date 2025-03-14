/* #include <stdio.h>

int main()
{
    char str[32];
    scanf("%s", str);
    printf("%s", str);
    return 0;
} */

/* #include <stdio.h>

int main()
{
    char str[2048];
    fgets(str, 2047, stdin);
    printf("%s", str);
    return 0;
} */

/* #include <stdio.h>

int main()
{
    int d, m;
    scanf("%d.%d", &d, &m);
    printf("%d\n%d", d, m);
    return 0;
} */

//1025 1개의 숫자로 각각 구분되어 저장
#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
    printf("[%d]\n", a*10000);
    printf("[%d]\n", b*1000);
    printf("[%d]\n", c*100);
    printf("[%d]\n", d*10);
    printf("[%d]\n", e*1);
    return 0;
}



