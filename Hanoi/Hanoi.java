import java.util.*;

public class Hanoi{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        Hanoi ht=new Hanoi();
        ht.move(n,'A','B','C');
    }
    public void  move(int n,char a,char b,char c){
        //int k=0;
        if(n==0)
            System.out.println("quit");
        else if(n==1)
            System.out.println("From "+a+"to "+c);
        else
            /*Hanoi(n-1,a,c,b);
            k++;
            Printf("%d: From %c to %c\n",k,a,c);
            Hanoi(n-1,b,a,c);
            */
            move(n-1,a,c,b);
            move(1,a,b,c);
            move(n-1,b,a,c);

    }
}
