class Main {
    public static void main(String[] args) {
        int drink_choice = 3;
        switch (drink_choice) {
            case 1: System.out.println("You have selected: Tea"); break;
            case 2: System.out.println("You have selected: Coffee"); break;
            case 3: System.out.println("You have selected: Juice"); break;
            default: System.out.println("Invalid selection.");
        }
    }
}