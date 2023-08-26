import java.util.*;
class Greaternum
{
  public static void main(String[] args)
{
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter a number");
  double a= sc.nextDouble();
  System.out.println("Enter another number");
  double b=sc.nextDouble();
  if(a>b)
  {
    System.out.println("the number = "+ a +" is greater");
  }
  else
  {
    System.out.println("the number = "+ b + " is greater ");

  }
}
}