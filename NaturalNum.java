import java.util.*;
class NaturalNum
{
  public static void main(String[] args)
  {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter starting number");
    int n1=sc.nextInt();
    System.out.println("Enter ending number");
    int n2=sc.nextInt();

    for(int i=n1;i<=n2;i++)
    {
      System.out.println(i);
    }
  }
}