/*
Input:4 2
Output:16
*/

import java.util.*;
import java.util.Scanner;

public Class Ackerman{ 
	public static void public static void main(String[] args) {
		Scanner in = new Scanner(System.in); 

		int n = in.nextInt();
		int m = in.nextInt();

		System.out.println(ackerman(n,m));
	}
}
public static int ackerman(int n,int m){ 
	int r = 0;
	if(m==0&&n==1){ 
		r = 2;
	}else if (m >= 0 && n == 0) {
		r = 1;
	}else if (m == 0 && n >= 2) {
		r = n + 2;
	}else if (m >=1 && n >= 1) {
		r = ackerman(ackerman(n-1,m),m-1);
	}
	return r;
}