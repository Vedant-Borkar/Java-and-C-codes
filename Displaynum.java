import java.util.*;
class Displaynum
{
  public static void main(String[] args)
  {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a 4 digit number");
    int a= sc.nextInt();
    System.out.println("The first and last 2 digits of the number are " +(a/1000) + " and " + (a%100) );
  
  }
}