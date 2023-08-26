import java.util.*;
class OFFICE
{
  public static void main(String[] args)
  {
    Scanner br=new Scanner(System.in);
    System.out.println("Input employee code ");
    int ec= br.nextInt();
    System.out.println("Input salary of employee");
    double sl= br.nextDouble();
    System.out.println("Special Allowance = "+ (0.215*sl));
    System.out.println("SALARY SLIP :");
    System.out.println("Employee Code ="+ ec);
    System.out.println("Employee Salary = "+sl);
    System.out.println("Special allowance ="+ (.215*sl));
    System.out.println("Total Salary ="+ (1.215*sl));
  }
}