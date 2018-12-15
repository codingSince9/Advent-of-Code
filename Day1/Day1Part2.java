package year_2018;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.io.IOException;

public class Day1Part2 {

	public static void main(String[] args) throws IOException {

		BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
		Integer sumOfFrequencies = 0, firstToAppearTwice=0;
		LinkedList<Integer> frequencies = new LinkedList<>();
		LinkedList<String> inputToRepeat = new LinkedList<>();
		String line;

		while ((line = input.readLine()) != null && line.length() != 0) {
			sumOfFrequencies += Integer.parseInt(line);
			frequencies.add(sumOfFrequencies);
			inputToRepeat.add(line);
		}

		Integer sum = sumOfFrequencies;
		boolean duplicateIsFound = false;
		while (!duplicateIsFound) {
			for (String str : inputToRepeat) {
				sum += Integer.parseInt(str);
				if (frequencies.contains(sum)) {
					duplicateIsFound = true;
					firstToAppearTwice = sum;
					break;
				}
				frequencies.add(sum);
			}
		}
		System.out.println("First frequency to appear twice is: " + firstToAppearTwice);
	}
}
