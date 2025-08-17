class Main {
    public static void main(String[] args) {
        char ch = '$';
        if (Character.isLetter(ch)) {
            System.out.println("The character is an alphabet.");
        } else if (Character.isDigit(ch)) {
            System.out.println("The character is a digit.");
        } else {
            System.out.println("The character is a special character.");
        }
    }
}