public class ExclusiveOR {
    public static void main(String[] args){
        int a[]={1,4,4,1,3};
        int result=0;
        for(int i=0;i<a.length;i++){
            result ^=a[i];
        }
        System.out.println(result);
    }
}
