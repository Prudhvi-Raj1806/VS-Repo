class Main {
    public static void main(String[] args) {
        char op = '+';
        int num1 = 10, num2 = 5;
        switch (op) {
            case '+': System.out.println(num1 + " + " + num2 + " = " + (num1 + num2)); break;
            case '-': System.out.println(num1 + " - " + num2 + " = " + (num1 - num2)); break;
            case '*': System.out.println(num1 + " * " + num2 + " = " + (num1 * num2)); break;
            case '/': System.out.println(num1 + " / " + num2 + " = " + (num1 / num2)); break;
            default: System.out.println("Invalid operator.");
        }
    }
}