import java.util.*;
import java.io.*;

public class Main {
  public static void main(String args[]) throws IOException {
    
    //write your code here
    Scanner sc=new Scanner(System.in);
    int t,n,m;
    int mat[][]; int c[];
    t=sc.nextInt();
    for(int i=0;i<t;i++)
    {
      n=sc.nextInt();
      m=sc.nextInt();
      mat=new int[n][m];
      c=new int[n];
      for(int k=0;k<n;k++)
      {
        for(int j=0;j<m;j++)
        {
          mat[k][j]=sc.nextInt();
        }
      }
      for(int k=0;k<n;k++)
      {
        for(int j=0;j<m;j++)
        {
          if(mat[k][j]==1)
            c[k]++;
        }
      }
      int sum=0;
      for(int k=0;k<n;k++)
      {
        sum=sum+c[k];
      }
      if(sum==0)
      {
        System.out.println("-1");
      }
      else
      {
      int max=c[0];
      for(int k=0;k<n;k++)
      {
        if(max<c[k])
          max=c[k];
      }
      for(int k=0;k<n;k++)
      {
        if(max==c[k])
          max=k;
      }
      System.out.println(max);
      }
    }
    
  }
}
