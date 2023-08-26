import java.util.*;
class Arraysumm
{
  public static void main(String args[])
  {
    int i;
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter number of elements in the array");
  int n=sc.nextInt();
  int arr[]=new int[n];
  System.out.println("Enter array elements");
  for(i=0;i<n;i++)
  {
    arr[i]=sc.nextInt();
  }
  int sum=0;
  for(i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }

  System.out.println("Sum of array elements is " + sum);


  }
}