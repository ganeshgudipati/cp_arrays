import java.util.*;
import java.io.*;
import java.lang.Math;
public class Main {
  public static int dis(int x1,int y1,int x2,int y2)
  {
    return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
  }
  public static void main(String args[]) throws IOException {
    
    //write your code here
    int t=0;
    int[] x=new int[4];
    int[] y=new int[4];
    Scanner sc=new Scanner(System.in);
    t=sc.nextInt();
    for(int j=0;j<t;j++){
    for(int i=0;i<4;i++)
    {
      x[i]=sc.nextInt();
      y[i]=sc.nextInt();
    }
    int d12=dis(x[0],y[0],x[1],y[1]);
    int d13=dis(x[0],y[0],x[2],y[2]);
    int d14=dis(x[0],y[0],x[3],y[3]);
    int d23=dis(x[1],y[1],x[2],y[2]);
    int d24=dis(x[1],y[1],x[3],y[3]);
    int d34=dis(x[2],y[2],x[3],y[3]);
    if(d12==0 || d13==0 || d14==0)
     System.out.println("No");
    else if(d12==d13 && 2*d12==d14 && 2*d24==d23)
      System.out.println("Yes");
    else if(d13==d14 && 2*d13==d12 && 2*d23==d34)
      System.out.println("Yes");
    else if(d12==d14 && 2*d12==d13 && 2*d23==d24)
      System.out.println("Yes");
    else
      System.out.println("No");
  }}
}
