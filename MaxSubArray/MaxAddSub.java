package MaxSubArray;

public class MaxAddSub {
	public static void main(String[] args)
	{
		
	}
	public static double maxAddSub(double a[], int from, int to)
	{
		if(to == from)
		{
			return a[from];
		}
		int middle = (from+to)/2;
		double m1 = maxAddSub(a, from, middle);
		double m2 = maxAddSub(a, middle+1, to);
		
		int i;
		int left = (int) a[middle];
		int now = (int) a[middle];
		for(i = middle-1; i >= from; --i)
		{
			now += a[i];
			left = max(now, left);
		}
		now = (int) a[middle+1];
		for(i = middle+2; i <= to; ++i)
		{
			now += left + (int)right;
			int right = max(now, right);
		}
		double m3 = left + right;
		return max(m1, m2, m3);
		
	}
}
