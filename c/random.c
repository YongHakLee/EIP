#include <stdio.h>
#include <stdlib.h>
// #include <locale.h>
// #include <windows.h>
#include <time.h>

int main(void)
{
    // SetConsoleOutputCP(CP_UTF8);
    // SetConsoleCP(CP_UTF8);
    // setlocale(LC_ALL, ".UTF-8");

    // int num = rand() % 3 // 3개의 경우의 수 중에 하나를 뽑게 한다. (0부터 시작) (0 ~ 2)
    // srand(time(NULL));        // 난수 초기화
    // int num = rand() % 3 + 1; // 1 ~ 3

    printf("난수 초기화 이전.. \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", rand() % 10);
    }

    srand(time(NULL)); // 난수 초기화
    printf("\n\n난수 초기화 이후.. \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", rand() % 10);
    }

    return 0;
}
