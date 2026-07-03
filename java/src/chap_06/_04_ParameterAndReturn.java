package chap_06;

public class _04_ParameterAndReturn {

    // public static void power(int number) { // Parameter, 매개변수
    // // 전달값이 있는 메소드
    // int result = number * number;
    // System.out.println(number + " 의 제곱은 " + result);
    // }

    public static int getPower(int number) {
        int result = number * number;
        return result;
    }

    // public static void powerByExp(int number, int exponent) {
    // int result = 1;
    // for (int i = 0; i < exponent; i++) {
    // result *= number;
    // }
    // System.out.println(number + " 의" + exponent + " 제곱은 " + result);
    // }

    public static int getpowerByExp(int number, int exponent) {
        int result = 1;
        for (int i = 0; i < exponent; i++) {
            result *= number;
        }
        return result;
    }

    public static void main(String[] args) {
        // 전달값과 반환값이 있는 메소드
        int retVal = getPower(2);
        System.out.println(retVal);

        retVal = getPower(3);
        System.out.println(retVal);

        retVal = getpowerByExp(2, 5);
        System.out.println(retVal);

        System.out.println(getpowerByExp(3, 3));

    }
}
