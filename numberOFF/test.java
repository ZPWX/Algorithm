public class test{
    public static void main(String[] rags){
        int a[]=new int[17];
        int i,num=1;
        int count=17;
        for(i=0;i<17;i++){
            a[i]=1;
        }
        i=0;
        while(count>1)
        {
            while(a[i]==0)
            {
                i=(i+1)%17;
            }
            if(num%3==0)
            {
                a[i]=0;
                count--;
            }
            i=(i+1)%17;
            num++;
        }
       for(i=0;i<17;i++){
            if(a[i]==1){
                System.out.println(i);
            }
       }
        //System.out.println(i);
       }

}
