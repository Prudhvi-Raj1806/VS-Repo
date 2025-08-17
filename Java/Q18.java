class Main {
    public static void main(String[] args) {
        int month = 2;
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                System.out.println("Number of days: 31");
                break;
            case 4: case 6: case 9: case 11:
                System.out.println("Number of days: 30");
                break;
            case 2:
                System.out.println("Number of days: 28 or 29");
                break;
            default:
                System.out.println("Invalid month number.");
        }
    }
}