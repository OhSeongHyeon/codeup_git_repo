#include <stdio.h>

int main()
{
    //1091
    // long long int a, m, d, n;
    // scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
    // while (n-- > 1)
    // {
    //     a *= m;
    //     a += d;
    // }
    // printf("%lld", a);

    //1092
    // int a, b, c, d;
    // scanf("%d %d %d", &a, &b, &c);
    // for (d = 1; (d%a != 0 || d%b != 0 || d%c != 0); d++) {}
    // printf("%d", d);

    //1093
    // int n;
    // scanf("%d", &n);
    // int arr[23] = {};
    // for (int i = 0; i < n; i++) {
    //     int call;
    //     scanf("%d", &call);
    //     arr[call-1]++;
    // }
    // for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    
    //1094
    // int n;
    // scanf("%d", &n);
    // int arr[n];
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    // }
    // for (int i = n-1; i >= 0; i--) {
    //     printf("%d ", arr[i]);
    // }

    //1095
    int n;
    scanf("%d", &n);
    int c;
    int min = 23;
    for (int i = 0; i < n; i++) {
        scanf("%d", &c);
        if (min > c) min = c;
    }
    printf("%d", min);

    return 0;
}