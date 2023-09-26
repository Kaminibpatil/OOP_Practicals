import java.util.Scanner;
class UserException extends Exception {
    public UserException(String message) {
        super(message);
    }
}
class User {
    private int age;
    private double income;
    private String city;
    private boolean hasFourWheeler;
    public void setAge(int age) throws UserException {
        if (age < 18 || age > 55) {
            throw new UserException("Invalid age! Age should be between 18 and 55.");
        }
        this.age = age;
    }
    public void setIncome(double income) throws UserException {
        if (income < 50000 || income > 100000) {
            throw new UserException("Invalid income! Income should be between Rs. 50,000 and Rs. 1,00,000.");
        }
        this.income = income;
    }
    public void setCity(String city) throws UserException {
        String[] allowedCities = {"Pune", "Mumbai", "Bangalore", "Chennai"};
        boolean isValidCity = false;
        for (String allowedCity : allowedCities) {
            if (city.equalsIgnoreCase(allowedCity)) {
                isValidCity = true;
                break;
            }        }
        if (!isValidCity) {
            throw new UserException("Invalid city! User should stay in Pune, Mumbai, Bangalore, or Chennai.");
        }
        this.city = city;
    }
    public void setHasFourWheeler(boolean hasFourWheeler) {
        this.hasFourWheeler = hasFourWheeler;
    }
    public int getAge() {
        return age;
    }
    public double getIncome() {
        return income;
    }
    public String getCity() {
        return city;
    }
    public boolean hasFourWheeler() {
        return hasFourWheeler;
    }  }
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        User user = new User();
        try {
            System.out.print("Enter user age: ");
            int age = scanner.nextInt();
            user.setAge(age);
            System.out.print("Enter user income: ");
            double income = scanner.nextDouble();
            user.setIncome(income);
            System.out.print("Enter user city: ");
            String city = scanner.next();
            user.setCity(city);
            System.out.print("Does the user have a 4-wheeler (true/false)? ");
            boolean hasFourWheeler = scanner.nextBoolean();
            user.setHasFourWheeler(hasFourWheeler);
            System.out.println("\nUser details:");
            System.out.println("Age: " + user.getAge());
            System.out.println("Income: Rs. " + user.getIncome());
            System.out.println("City: " + user.getCity());
            System.out.println("Has 4-wheeler: " + user.hasFourWheeler());
        } catch (UserException e) {
            System.out.println("Error: " + e.getMessage());
        }    }  }
