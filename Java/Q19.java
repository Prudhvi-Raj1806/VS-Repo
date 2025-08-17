class Main {
    public static void main(String[] args) {
        int fuel_choice = 2;
        switch (fuel_choice) {
            case 1: System.out.println("You have chosen: Petrol"); break;
            case 2: System.out.println("You have chosen: Diesel"); break;
            case 3: System.out.println("You have chosen: Electric"); break;
            default: System.out.println("Invalid choice.");
        }
    }
}