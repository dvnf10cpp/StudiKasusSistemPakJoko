import java.util.Scanner;

public class App {
    final static Scanner in = new Scanner(System.in);           
    static Admin inCharge = null;
    public static void main(String[] args) throws Exception {
        login();
    }

    public static void login(){
        System.out.println("Selamat datang pada laman login terminal sederhana");
        do{
            System.out.print("Username     : ");
            String username = in.nextLine();
            System.out.print("Passsword    : ");
            String password = in.nextLine();
            inCharge = DaftarAdmin.authenticate(username, password);
            System.out.println("-".repeat(40));
            if(inCharge == null){
                System.out.println("Username atau password tidak ada");
            }
        } while(inCharge == null); 
        menu();  
    }

    public static void menu(){
        System.out.println("Selamat datang pada aplikasi terminal sederhana");
        System.out.println("Silahkan pilih salah satu menu dibawah ini");
        System.out.println("1. Menampilkan semua antrian pada hari ini");
        System.out.println("2. Menambahkan antrian");
        System.out.println("3. Log out dari sistem");
        System.out.print("Masukkan anda : ");
        char choice = in.nextLine().charAt(0);
        switch(choice){
            case '1':
                break;
            case '2':  
                break;
            case '3':
                login();
                break;
        }
    }
}
