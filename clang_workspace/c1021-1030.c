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

/* #include <stdio.h>

int main()
{
    char wds[31];
    scanf("%s", wds);
    for(int i = 0; wds[i] != '\0'; i++)
    {
        printf("\'%c\'\n", wds[i]);
    }
    return 0;
} */

//1025 1개의 숫자로 각각 구분되어 저장
/* #include <stdio.h>

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
} */

/* #include <stdio.h>

int main()
{
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
    printf("%d", m);
    return 0;
} */

/* #include <stdio.h>

int main()
{
    int y, m, d;
    scanf("%d.%d.%d", &y, &m, &d);
    printf("%02d-%02d-%04d", d, m, y);
    return 0;
} */

/* #include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);
    printf("%u", n);
    return 0;
} */

/* #include <stdio.h>

int main()
{
    double d;
    scanf("%lf", &d);
    printf("%.11lf", d);
    return 0;
} */

#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    printf("%lld", n);
    return 0;
}

