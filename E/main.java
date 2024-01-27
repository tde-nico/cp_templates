import java.util.*;
import java.io.File;
import java.io.PrintStream;
import java.io.FileNotFoundException;

public class solver {

	public static int solve(int a, int b, int c, int d, int e, int[][] strade, int[][] voli) {
		// SCRIVI QUA IL TUO CODICE
		return (0);
	}

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		int a = scanner.nextInt();
		int b = scanner.nextInt();
		int c = scanner.nextInt();
		int d = scanner.nextInt();
		int e = scanner.nextInt();
		scanner.nextLine();
		
		int[][] strade = new int[b][3];
		int[][] voli = new int[c][2];
		
		for(int w=0; w<b; w++) {
			int f = scanner.nextInt();
			int g = scanner.nextInt();
			int h = scanner.nextInt();
			strade[w][0] = f;
			strade[w][1] = g;
			strade[w][2] = h;
			scanner.nextLine();
		}
		for(int w=0; w<c; w++) {
			int i = scanner.nextInt();
			int l = scanner.nextInt();
			voli[w][0] = i;
			voli[w][1] = l;
			scanner.nextLine();
		}

		System.out.println(solve(a, b, c, d, e, strade, voli));
	}
}
