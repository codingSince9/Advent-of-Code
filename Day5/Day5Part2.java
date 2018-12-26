package year_2018;

import java.util.ArrayList;
import java.util.Scanner;

public class Day5Part2 {
	
	/**
	 * 
	 * @param
	 * @return length of the shortest string
	 */
	public static int minimum(String inputString) {
		StringBuilder sb = new StringBuilder();
		int lengthMin = inputString.length();
		int length;

		for (int i = 0; i < 26; ++i) {
			char ch = (char) ('A' + i);
			sb.append(ch);
			sb.append("|");
			sb.append(Character.toLowerCase(ch));
			
			//removes the polymer
			String attempt = inputString.replaceAll(sb.toString(), "");
			sb.delete(0, sb.length());

			char[] a = attempt.toCharArray();
			ArrayList<Character> input = new ArrayList<>();
			for (char c : a) {
				input.add(c);
			}

			//checks if the length of string without the specific polymer is the shortest string
			length = Day5Part1.remove(input);
			if (lengthMin > length) {
				lengthMin = length;
			}
		}
		return lengthMin;
	}

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		String str;
		str = sc.next();
		
		System.out.println("New Length is: " + minimum(str));

		sc.close();
	}
}
