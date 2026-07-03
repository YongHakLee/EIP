package chap_06;

public class _06_WhenToUse {

    public static int getPower(int number) {
        return getPower(number, 2);
    }

    public static int getPower(int number, int exponent) {
        int result = 1;
        for (int i = 0; i < exponent; i++) {
            result *= number;
        }
        return result;
    }

    public static void main(String[] args) {
        // 2의 2제곱, 3의 3제곱, 4의 2제곱 ....

    }
}
