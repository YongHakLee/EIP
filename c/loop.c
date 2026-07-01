#include <stdio.h>

int main_loop(void) // main 함수가 여러 개가 있으면 실행할 때 오류가 발생할 수 있다.
{
    // printf("Hello Wrold\n");

    // ++
    // int a = 10;
    // printf("a is %d\n", a);
    // a++;
    // printf("a is %d\n", a);
    // a++;
    // printf("a is %d\n", a);

    // int b = 20;
    // printf("b is %d\n", ++b); // 줄 수행 전에
    // printf("b is %d\n", b++); // 줄 수행 후에
    // printf("b is %d\n", b);

    // int i = 1;
    // printf("Hello World %d\n", i++); // 1
    // printf("Hello World %d\n", i++); // 2
    // printf("Hello World %d\n", i++); // 3
    // printf("Hello World %d\n", i++); // 4
    // printf("Hello World %d\n", i++); // 5
    // printf("Hello World %d\n", i);   // 6

    // 반복문
    // for, while, do while

    // for (선언; 조건; 증감) { }
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("Hello World %d\n", i);
    // }

    // while (조건) { }
    // int i = 1;
    // while (i <= 10)
    // {
    //     printf("Hello World %d\n", i++);
    //     // i++;
    // }

    // do { } while (조건);
    // int i = 1;
    // do
    // {
    //     printf("Hello World %d\n", i++);
    // } while (i <= 10);

    // 이중 반복문
    // for (int i = 1; i <= 3; i++)
    // {
    //     printf("the first iter : %d\n", i);

    //     for (int j = 1; j <= 5; j++)
    //     {
    //         printf("    the second iter : %d\n", j);
    //     }
    // }

    // 구구단
    // for (int i = 2; i <= 9; i++)
    // {
    //     printf("%ddan calculation\n", i);
    //     for (int j = 1; j <= 9; j++)
    //     {
    //         printf("  %d x %d = %d\n", i, j, i * j);
    //     }
    // }

    // * 문제 1
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // * 문제 2
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j < 5 - 1; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 0; k <= i; k++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // 프로젝트: 피라미드를 쌓아라
    int floor;
    printf("X floor?");
    scanf_s("%d", &floor);
    for (int i = 0; i < floor; i++)
    {
        for (int j = i; j < floor - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i * 2 + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
