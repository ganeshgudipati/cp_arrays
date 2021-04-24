import java.util.*;
import java.io.*;

public class Main {
  public static void main(String args[]) throws IOException {
    
    //write your code here
    Scanner sc=new Scanner(System.in);
    int t,n[],count=0;
    t=sc.nextInt();
    n=new int[t];
    for(int i=0;i<t;i++)
    {
       n[i]=sc.nextInt();
    }
    for(int i=0;i<t;i++)
    {
      count=0;
      int r;
      count=n[i]/1000;
      r=n[i]%1000;
      count=count+(r/500);
      r=r%500;
      count=count+(r/100);
      r=r%100;
      count=count+(r/50);
      r=r%50;
      count=count+(r/20);
      r=r%20;
      count=count+(r/10);
      r=r%10;
      count=count+(r/5);
      r=r%5;
      count=count+(r/2);
      r=r%2;
      count=count+r;
      System.out.println(count);
    }
  }
}
