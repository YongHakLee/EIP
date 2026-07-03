package chap_04;

public class _Quiz_04 {
    public static void main(String[] args) {
        // int max = 30000;
        // int hour = 2;
        // boolean challenged = true;
        // boolean small = true;
        // int fee = 0;

        // if (challenged || small) {
        // fee = (hour * 4000) / 2;
        // } else {
        // fee = hour * 4000;
        // }

        // if (fee >= max) {
        // fee = 30000;
        // }

        // System.out.println("주차 요금은 " + fee + "원 입니다.");

        int hour = 5;
        boolean isSmallCar = false;
        boolean withDisabledPerson = false;

        int fee = hour * 4000;

        if (fee > 30000) {
            fee = 30000;
        }

        if (isSmallCar || withDisabledPerson) {
            fee /= 2;
        }

        System.out.println("주차 요금은 " + fee + "원 입니다.");

    }
}
