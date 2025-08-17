import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the password: ");
        String password = scanner.nextLine();
        if (password.equals("admin123")) {
            System.out.println("Welcome");
        }
        scanner.close();
    }
}