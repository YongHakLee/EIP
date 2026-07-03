package chap_05;

public class _Quiz_05 {
    public static void main(String[] args) {
        int sizes[] = new int[10];
        for (int i = 0; i < sizes.length; i++) {
            sizes[i] = 250 + (i * 5);
        }
        // for (int i = 0; i < sizes.length; i++) {
        // System.out.println("사이즈 " + sizes[i] + " (재고 있음)");
        // }

        for (int size : sizes) {
            System.out.println("사이즈 " + size + " (재고 있음)");
        }

    }
}
