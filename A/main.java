import java.util.*;
import java.io.File;
import java.io.PrintStream;
import java.io.FileNotFoundException;

public class solver {

	public static int solve(int A, int B) {
		// SCRIVI QUA IL TUO CODICE
		return (0);
	}

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		int T = scanner.nextInt();
		scanner.nextLine();

		while (T > 0) {
		
			int A = scanner.nextInt();
			int B = scanner.nextInt();
			scanner.nextLine();

			System.out.println(solve(A, B));
			--T;
		}
	}
}
