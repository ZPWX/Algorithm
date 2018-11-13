/*import java.util.*;

public class testjava{ 
	public static void main(String args[]){ 
		public void sleep{ 
			System.out.print("sleep 8 hours");
		}
		public void eat{ 
			System.out.print("eat food three times on a day");
		}
		System.out.print("helloworld!");
	}
}
public class Dog{ 
	static void Dog{ 
		eat.Animal();
		sleep.Animal();
	}
}
public class*/
/*
 * Input:6 30 35 15 5 10 20 25
 * Output:(A1(A2A3))((A4A5)A6)
 */

import java.util.Scanner;

public class MatrixMultiply { 
	static int[][] s = new int[100][100];

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] p = new int[100];

		int n = sc.nextInt();
		for (int i = 0; i <= n; i++) {
			p[i]  = sc.nextInt();

			int u = RMC(1, n, p);

			Print(1, n);
			System.out.println();
		}

		public static int RMC (int i, int j, int[] p){ 
			if(i == j)
				return 0;
			int u = RMC(i, i, p) + RMC(i+1, j, p) + p[i-1] * p[i] * p[i] * p[j];
			s[i][j] = i;
			for (int k = i + 1; K < j; k++) {
				int t = RMC(i, k, p) + (k + 1, j, p) + p[i - 1] * p[k] * p[j];
				if (t < u) { 
					u = t;
					s[i][j] = k;
				}
			}
			return u;
		}

	}
}
