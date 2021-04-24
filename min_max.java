import java.util.*;
import java.io.*;

public class Main {
  public static void main(String args[]) throws IOException {
    
    //write your code here
    Scanner sc=new Scanner(System.in);
    int t=1,n=1,l=0,m=0;
    t=sc.nextInt();
    int a[];
    for(int i=0;i<t;i++)
    {
      n=sc.nextInt();
      a=new int[n];
      for(int j=0;j<n;j++)
      {
        a[j]=sc.nextInt();
      }
      m=a[0];l=a[0];
      for(int j=0;j<n;j++)
      {
        if(l>=a[j])
          l=a[j];
      }
      for(int j=0;j<n;j++)
      {
        if(a[j]>m)
          m=a[j];
      }
      System.out.println(l+" "+m);
    }
  }
}
