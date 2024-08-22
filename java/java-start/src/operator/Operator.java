package operator;

public class Operator {
    public static void main(String[] args) {
        String str = "My age is ";
        int age = 24;
        System.out.println(str + age);

        String a = "My ", b = "age ", c = "is ";
        String tmp = a + b + c;
//        if (str.equals(tmp)) {
        if (str == tmp) {
            System.out.println("true");
        }
        else {
            System.out.println("false");
        }

        System.out.println(str.equals(tmp) ? "Hi there" : "Nope");
        System.out.println(str instanceof String);
    }
}
