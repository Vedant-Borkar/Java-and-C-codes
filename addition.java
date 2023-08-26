

import java.util.Scanner;

class Addition {
    Addition() {
    }

    public static void main(String[] args) {
        Scanner br = new Scanner(System.in);
        System.out.println("Enter a number");
        int a = br.nextInt();
        System.out.println("Enter 2nd number");
        int b = br.nextInt();
        System.out.println("The sum is = " + (a + b));
    }
}
