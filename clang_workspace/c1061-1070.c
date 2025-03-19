#include <stdio.h>

int main()
{
    //1061
    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("%d", a | b);

    //1062
    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("%d", a ^ b);

    //1063
    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("%d", a > b ? a : b);

    //1064
    // int a, b, c;
    // scanf("%d %d %d", &a, &b, &c);
    // printf("%d", (a < b ? a : b) < c ? (a < b ? a : b) : c);

    //1065
    // int a, b, c;
    // scanf("%d %d %d", &a, &b, &c);
    // if(a%2==0)
    // {
    //     printf("%d\n", a);
    // }

    // if(b%2==0)
    // {
    //     printf("%d\n", b);
    // }

    // if(c%2==0)
    // {
    //     printf("%d\n", c);
    // }

    //1066
    // int arr[3];
    // int arrLen = sizeof(arr) / sizeof(int);
    // scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    // for (int i = 0; i < arrLen; i++)
    // {
    //     printf("%s\n", isEven(arr[i]) ? "even" : "odd");
    // }

    //1067
    // int a;
    // scanf("%d", &a);
    // printf("%s\n", a > 0 ? "plus" : "minus");
    // printf("%s\n", a%2 == 0 ? "even" : "odd");

    //1068
    // int score;
    // scanf("%d", &score);
    // if (score >= 90 && score <= 100) printf("A");
    // else if (score >= 70 && score <= 89) printf("B");
    // else if (score >= 40 && score <= 69) printf("C");
    // else printf("D");

    //1069
    // char c;
    // scanf("%c", &c);
    // switch (c)
    // {
    // case 'A':
    //     printf("best!!!");
    //     break;
    // case 'B':
    //     printf("good!!");
    //     break;
    // case 'C':
    //     printf("run!");
    //     break;
    // case 'D':
    //     printf("slowly~");
    //     break;
    // default:
    //     printf("what?");
    //     break;
    // }

    //1070
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 12: case 1: case 2:
        printf("winter");
        break;
    case 3: case 4: case 5:
        printf("spring");
        break;
    case 6: case 7: case 8:
        printf("summer");
        break;
    default:
        printf("fall");
        break;
    }

    return 0;
}

//1066
// int isEven(int i)
// {
//     return i%2 == 0;
// }