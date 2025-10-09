import java.util.Scanner; // Import the Scanner class to read user input

public class StringReverser {

    public static void main(String[] args) {
        // Create a Scanner object to read input from the console
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter a string
        System.out.print("Enter a string to reverse: ");

        // Read the input string from the user
        String originalString = scanner.nextLine();

        // Close the scanner to prevent resource leaks
        scanner.close();

        // Reverse the string using StringBuilder
        StringBuilder reversedStringBuilder = new StringBuilder(originalString);
        String reversedString = reversedStringBuilder.reverse().toString();

        // Print the original and reversed strings
        System.out.println("Original string: " + originalString);
        System.out.println("Reversed string: " + reversedString);
    }
}
