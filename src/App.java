import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        final Scanner in = new Scanner(System.in);
        boolean done = false;
        System.out.println("Selamat datang pada laman login terminal sederhana");
        do{
            System.out.print("Username     : ");
            String username = in.nextLine();
            System.out.print("Passsword    : ");
            String password = in.nextLine();
            done = DaftarAdmin.authenticate(username, password);
            System.out.println("-".repeat(40));
        } while(!done); 
    }
}
