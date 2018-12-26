package year_2018;

import java.util.ArrayList;
import java.util.Scanner;

public class Day5Part1 {
	
	/**
	 * Removes polymers
	 * @param input
	 * @return size of input after removing
	 */
	public static int remove(ArrayList<Character> input) {
		try {
			for (int i = 0; i < input.size(); ++i) {
				if (input.get(i) != input.get(i + 1)
						&& Character.toLowerCase(input.get(i)) == Character.toLowerCase(input.get(i + 1))) {
					input.remove(i);
					input.remove(i);
					i = -1;

				}
			}
		} catch (IndexOutOfBoundsException ex) {
		}

		return input.size();
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str;
		str = sc.next();
		char[] a = str.toCharArray();
		ArrayList<Character> input = new ArrayList<>();

		for (char c : a) {
			input.add(c);
		}

		System.out.println("New length: " + remove(input));

		sc.close();
	}
}
