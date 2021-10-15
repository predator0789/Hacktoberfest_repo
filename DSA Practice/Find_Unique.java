import java.util.Scanner;

public class Find_Unique {
	
	public static int[] Input() {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int input[] = new int[n];
		for (int i = 0; i < n; i++) {
			input[i] = sc.nextInt();
		}
		return input;
	}
	
	public static int Search(int arr[]) {
		int p = 0;
		for (int i = 0; i <arr.length; i++) {
			boolean unique = true;
			
			for (int j = i + 1; j < arr.length; j++) {
				if (arr[j] == arr[i]) {
					
					unique = false;
					break;	
				}
			}
			if(unique) {
				 return arr[i];
				}
		}
		return p;
	}
	

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for (int i = 1; i <=t; i++) {
			int arr[] = Input();
			int j = Search(arr);
			if (j != 0)
				System.out.println(j);
		}
        sc.close();

	}
}