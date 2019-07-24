package MaxSubArray;

public class MaxDynArray {
	public static int main(String[] args)
	{
		int a[] = {};
		int result = a[0];
		int sum = a[0];
		
		for(int i = 1; i < a[0]-1; i++)
		{
			if(sum > 0)
				sum += a[i];
			else
				sum = a[i];
			if(sum > result)
				result = sum;
			
		}
		return result;
	}
	
}
