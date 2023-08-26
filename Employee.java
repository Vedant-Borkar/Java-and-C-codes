
import java.util.Scanner;

class EmployeWage 
{
    public static void main(String[] args) 
    {
        Scanner br = new Scanner(System.in);
        System.out.println("Enter Number of Employees");
        int em = br.nextInt();
        System.out.println("Enter rate per hour");
        double rate = br.nextDouble();
        System.out.println("Total wages = " + (double)em * rate);
    }
}
