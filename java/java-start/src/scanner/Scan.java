package scanner;

import java.util.Arrays;
import java.util.Scanner;

public class Scan {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("몇 개의 랜덤 숫자를 만들까요?");
        int count = scanner.nextInt();
        int[] arr = new int[count];

        for (int i = 0; i < count; i++) {
            arr[i] =  (int)(Math.random() * 100);
        }

        System.out.println(Arrays.toString(arr));
    }
}
