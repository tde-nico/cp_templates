import java.util.*;
import java.io.File;
import java.io.PrintStream;
import java.io.FileNotFoundException;

public class solver {

	public static int[] solve(int N, int X[], int Y[]) {
		int[] out = {0, 0};
		// SCRIVI QUA IL TUO CODICE
		return (out);
	}

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		int N = scanner.nextInt();
		scanner.nextLine();
		
		int[] X = new int[N];
		int[] Y = new int[N];
		
		for(int i=0; i<N; i++) {
			X[i] = scanner.nextInt();
		}
		scanner.nextLine();
		for(int i=0; i<N; i++) {
			Y[i] = scanner.nextInt();
		}

		int[] out = solve(N, X, Y);
		System.out.println(out[0] + " " + out[1]);
	}
}
