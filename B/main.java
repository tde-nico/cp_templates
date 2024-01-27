import java.util.*;
import java.io.File;
import java.io.PrintStream;
import java.io.FileNotFoundException;

public class solver {

	public static String solve(int N, int A[], int B[]) {
		// SCRIVI QUA IL TUO CODICE
		return ("Yes");
	}

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		int T = scanner.nextInt();
		scanner.nextLine();

		while (T > 0) {
		
			int N = scanner.nextInt();
			scanner.nextLine();
			
			int[] A = new int[N];
			int[] B = new int[N];
			
			for(int i=0; i<N; i++) {
				A[i] = scanner.nextInt();
			}
			scanner.nextLine();
			for(int i=0; i<N; i++) {
				B[i] = scanner.nextInt();
			}

			System.out.println(solve(N, A, B));
			--T;
		}
	}
}
