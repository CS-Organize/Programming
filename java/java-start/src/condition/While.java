package condition;

public class While {
    public static void main(String[] args) {
        int cnt = 10;
        do {
            ++cnt;
            System.out.println("cnt: " + cnt);
        } while (cnt < 10);

        int[] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        for (int num : arr)
        {
            System.out.println(num);
        }
    }
}
