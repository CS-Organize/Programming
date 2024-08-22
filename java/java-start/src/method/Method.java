package method;

public class Method {
    public static void main(String[] args) {
        int sum = add(3, 5);
        System.out.println(sum);

        int[] arr = new int[10];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = (int)(Math.random() * 100);
            System.out.println(arr[i]);
        }

        System.out.println(average(arr));

        String str = "This is string";
        strjoin(str);
        System.out.println(str);
    }

    private static int add(int a, int b) {
        return a + b;
    }

    private static double average(int[] arr) {
        double sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum / arr.length;
    }

    private static void strjoin(String str) {
        str += "^_^";
    }
}
