#include <stdio.h>
// #include <locale.h>
// #include <windows.h>

int main(void)
{
    // Ensure the Windows console uses UTF-8 so Korean text prints correctly.
    // SetConsoleOutputCP(CP_UTF8);
    // SetConsoleCP(CP_UTF8);
    // setlocale(LC_ALL, ".UTF-8");

    // 정수형 변수에 대한 예제
    // int age = 12;
    // printf("%d\n", age);
    // age = 13;            // 처음엔 int로 선언하고, 그 뒤에는 선언하지 않아도 된다.
    // printf("%d\n", age); // %d: 어떤 정수형 변수를 출력한다.

    // 실수형 변수에 대한 예제
    // float f = 46.5f;
    // printf("%.2f\n", f);
    // double d = 4.428;
    // printf("%.2lf\n", d); // 세 번째 자리에서 반올림

    // 상수에 대한 예제
    // const int YEAR = 2000;
    // printf("태어난 년도 : %d\n", YEAR);
    // YEAR = 2001;

    // printf
    // 연산
    // int add = 3 + 7; // 10
    // printf("3 + 7 = %d\n", add);
    // printf("%d * %d = %d\n", 30, 79, 30 * 79);

    // scanf
    // 키보드 입력을 받아서 저장
    // int input;
    // printf("input value : ");
    // scanf_s("%d", &input); // &: input에 값을 받겠다.
    // printf("input value : %d\n", input);

    // int one, two, three;
    // printf("input three values : ");
    // scanf_s("%d %d %d", &one, &two, &three);
    // printf("one : %d\n", one);
    // printf("two : %d\n", two);
    // printf("three : %d\n", three);
    // 입력: 100 200 300

    // 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
    // char c = 'A';
    // printf("%c\n", c);

    // char str[256];
    // scanf_s("%s", str, sizeof(str)); // &없어도 됨. 크기 표기 해줘야 함.
    // printf("%s\n", str);

    // Project
    // 경찰관이 범죄자의 정보를 입수 (조서 작성)
    // 이름, 나이, 몸무게, 키, 범죄명
    // char name[256];
    // printf("이름이 뭐예요? ");
    // scanf_s("%s", name, sizeof(name));

    // int age;
    // printf("나이는 몇 살이에요? ");
    // scanf_s("%d", &age);

    // float weight;
    // printf("몸무게는 몇 kg이에요? ");
    // scanf_s("%f", &weight);

    // double height;
    // printf("키는 몇 cm예요? ");
    // scanf_s("%lf", &height);

    // char what[256];
    // printf("범죄명은 무엇인가요? ");
    // scanf_s("%s", what, sizeof(what));

    // // 조서 내용 출력
    // printf("\n\n--- 범죄자 정보 ---\n\n");
    // printf(" 이름        : %s\n", name);
    // printf(" 나이        : %d\n", age);
    // printf(" 몸무게      : %.2f\n", weight);
    // printf(" 키          : %.2lf\n", height);
    // printf(" 범죄명      : %s", what);

    // 이름 입력 (sizeof 인자 제거)
    char name[256];
    printf("이름이 뭐예요? ");
    scanf("%s", name);

    // 나이 입력
    int age;
    printf("나이는 몇 살이에요? ");
    scanf("%d", &age);

    // 몸무게 입력
    float weight;
    printf("몸무게는 몇 kg이에요? ");
    scanf("%f", &weight);

    // 키 입력
    double height;
    printf("키는 몇 cm예요? ");
    scanf("%lf", &height);

    // 범죄명 입력 (sizeof 인자 제거)
    char what[256];
    printf("범죄명은 무엇인가요? ");
    scanf("%s", what);

    // 조서 내용 출력
    printf("\n\n--- 범죄자 정보 ---\n\n");
    printf(" 이름        : %s\n", name);
    printf(" 나이        : %d\n", age);
    printf(" 몸무게      : %.2f\n", weight);
    printf(" 키          : %.2lf\n", height);
    printf(" 범죄명      : %s\n", what);

    return 0;
}
