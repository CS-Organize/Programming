package variable;

public class Var {
    public static void main(String[] args) {
        int integer; // variable declaration
        integer = 10; // variable initialization

        double real = 1.125;
        char character = 'A';
        boolean bool = true;
        String str = "hello";

        System.out.println(integer);
        System.out.println(real);
        System.out.println(character);
        System.out.println(bool);
        System.out.println(str);

        byte b = 127; // -128 ~ 127
        short s = 32767; // -32768 ~ 32767
        long l = 9223372036854775807L; // -9223372036854775808 ~ 9223372036854775807
        float f = 1.25f;

        System.out.println(b);
        System.out.println(s);
        System.out.println(l);
        System.out.println(f);

        int[] arr = {1, 2, 3, 4, 5}; // Reference type (배열, 클래스 등을 주소값으로 관리한다.) -> c++의 레퍼런스
        // int[] arr = new int[5];
        // int[] arr = new int[]{1, 2, 3, 4, 5}
        int[][] table = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
        };
        // int[][] table = new int[][]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        // int[][] table = new int[3][3];
        // 이유는 함수의 매개변수로 전달할 때 복사 생성자가 호출되는 것을 막기위함이라고 예상된다. -> 아니다. 참조형의 값을 복사한다..!
        // 기본 자료형은 Data type으로 값을 저장하고 있다.
        System.out.println(arr); // [I@7b23ec81 [I (int형 배열) 0x7b23ec81 (주소값)
        char[] chars = new char[10];
        for (int i = 0; i < 10; ++i)
            chars[i] = (char) ('A' + i);
        System.out.println(chars);
    }
}
