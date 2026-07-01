package chap_01;

public class _03_Variables {
    public static void main(String[] args){
        
        String name = "나도코딩";
        int hour = 15; 

        // String name;
        // name = "나도코딩"; // 오른쪽의 것을 왼쪽에 넣겠다. 

        System.out.println(name + "님, 배송이 시작됩니다. " + hour + "시에 방문 예정입니다.");
        System.out.println(name + "님, 배송이 완료되었습니다.");

        double score = 90.5; // 상대적으로 정밀한 데이터를 표현하기에 적합한 double
        char grade = 'A'; // 한 글자는 char로, 그리고 작은 따옴표를 사용한다.
        name = "강백호"; // 변수값을 바꿀 수 있다. 
        System.out.println(name + "님의 평균 점수는 " + score + "점입니다.");
        System.out.println("학점은 " + grade + "입니다.");

        boolean pass = true; // 따옴표 없음. false도 가능.
        System.out.println("이번 시험에 합격했을까요? " + pass);

        double d = 3.14123456789; // 더 정밀한 소수
        float f = 3.14123456789F; // 대문자 또는 소문자 f를 뒤에 붙여줘야 한다. 7번째 자리.
        System.out.println(d);
        System.out.println(f);

        // int i = 1000000000000; // int -21억 ~ +21억 정도
        long l = 1000000000000L;  // 대문자 또는 소문자 l을 뒤에 붙여줘야 한다.
        l = 1_000_000_000_000L; // _로 자리수를 알기 쉽게 해도 된다.
        System.out.println(l); 

        // int, long, float, double, char, String, boolean
    }
}
