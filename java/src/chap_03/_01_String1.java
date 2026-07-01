package chap_03;

public class _01_String1 {
    public static void main(String[] args){
        String s = "I like Java and Python and C.";
        System.out.println(s);

        // 문자열의 길이
        System.out.println(s.length()); // 29

        // 대소문자 변환
        System.out.println(s.toUpperCase()); // 대문자로
        System.out.println(s.toLowerCase()); // 소문자로

        // 포함 관계
        System.out.println(s.contains("Java")); // 포함된다면 true / 아니라면 false
        System.out.println(s.contains("C#")); // 포함된다면 true / 아니라면 false
        System.out.println(s.indexOf("Java")); // 위치정보 7 (시작위치 J)
        System.out.println(s.indexOf("C#")); // 위치정보 없다면 -1
        System.out.println(s.indexOf("and")); // 처음 만나는 위치 
        System.out.println(s.lastIndexOf("and")); // 마지막으로 만나는 위치
        System.out.println(s.startsWith("I like")); // 이 문자열로 시작하면 true 아니라면 false
        System.out.println(s.endsWith(".")); // 이 문자열로 끝나면 true 아니라면 false


    }

}
