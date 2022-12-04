import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class day04 {
    public static void main(String[] args) {
        // Read file input.txt line per line
        try {
            int rangeIn = 0;
            int overlap = 0;
            File file = new File("input.txt");
            Scanner scanner = new Scanner(file);
            while (scanner.hasNextLine()) {
                String line = scanner.nextLine();
                String[] splitLine = line.split(",");
                String[] part1 = splitLine[0].split("-");
                String[] part2 = splitLine[1].split("-");
                int[] intPart1 = new int[part1.length];
                int[] intPart2 = new int[part2.length];
                for (int i = 0; i < part1.length; i++) {
                    intPart1[i] = Integer.parseInt(part1[i]);
                }
                for (int i = 0; i < part2.length; i++) {
                    intPart2[i] = Integer.parseInt(part2[i]);
                }
                // Part 1 : Range
                if (intPart1[0] <= intPart2[0] && intPart2[0] <= intPart1[1]
                        && intPart1[0] <= intPart2[1] && intPart2[1] <= intPart1[1]) {
                    rangeIn++;
                } else if (intPart2[0] <= intPart1[0] && intPart1[0] <= intPart2[1]
                        && intPart2[0] <= intPart1[1] && intPart1[1] <= intPart2[1]) {
                    rangeIn++;
                }
                // Part 2 : Overlap
                if (intPart1[0] <= intPart2[0] && intPart2[0] <= intPart1[1]) {
                    overlap++;
                } else if (intPart2[0] <= intPart1[0] && intPart1[0] <= intPart2[1]) {
                    overlap++;
                }
            }
            System.out.println(rangeIn);
            System.out.println(overlap);
            scanner.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
}