import java.util.*;
class Quadratic
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter A =");
        int A=sc.nextInt();
        System.out.println("Enter B =");
        int B=sc.nextInt();
        System.out.println("Enter C =");
        int C=sc.nextInt();
        int x1= B*B + 4*A*C;
        int x2= B*B - 4*A*C;
        System.out.println("X1 = "+ x1);
        System.out.println("X2 = "+ x2);

    }
}