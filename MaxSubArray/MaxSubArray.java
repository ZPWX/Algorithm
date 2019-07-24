package MaxSubArray;

import java.util.Arrays;

public class MaxSubArray {
	public static void main(String[] args)
	{
		int maxSum[] = {1, -2, 3, 10, -4, 7, 2, -5};
		int currSum = 0;
		int result = maxSubArray(maxSum, currSum);
		
		System.out.println("连续子数组最大之和为： " + result );
	}
	
	public static int maxSubArray(int a[], int n)
	{
		int maxSum = a[0];
		int currSum;
		
		for(int i = 0; i < n; i++)
		{
			for(int j = i; j < n; j++)
			{
				currSum = 0;
				for(int k = i; k <= j; k++)
				{
					currSum += a[k];
				}
				if(currSum > maxSum)
					maxSum = currSum;
			}
		}
		return maxSum;
	}
}
