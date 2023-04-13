import java.util.Scanner;

public class App {
    final static Scanner in = new Scanner(System.in);           
    static Admin inCharge = null;
    public static void main(String[] args) throws Exception {
        login();
    }

    public static void login(){
        System.out.println("=".repeat(40));
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
        System.out.println("=".repeat(40));
        System.out.println("Selamat datang pada aplikasi terminal sederhana");
        System.out.println("Silahkan pilih salah satu menu dibawah ini");
        System.out.println("1. Menampilkan semua antrian pada hari ini");
        System.out.println("2. Menambahkan antrian");
        System.out.println("3. Log out dari sistem");
        System.out.print("Masukkan anda : ");
        char choice = in.nextLine().charAt(0);
        switch(choice){
            case '1':
                DaftarAntrian.displayAntrian();
                menu();
                break;
            case '2':  
                addAntrian();
                break;
            case '3':
                login();
                break;
        }
    }

    public static void addAntrian(){
        char select = ' ';
        DaftarLayanan dl = new DaftarLayanan();
        System.out.println("=".repeat(40)); 
        dl.displayLayanan();
        System.out.println("Masukkan nama pemesan : ");
        String pemesan = in.nextLine();
        System.out.println("Masukkan nomor telepon : ");
        String nomor = in.nextLine();
        System.out.println("Masukkan nomor plat : ");
        String plat = in.nextLine();
        Antrian antrian = new Antrian(pemesan, nomor, plat);
        do {
            System.out.print("Masukkan layanan yang ingin ditambahkan : ");
            int index = in.nextInt(); in.nextLine();
            antrian.addLayanan(dl.getLayanan(index));
            System.out.println("Apakah anda masih ingin menambahkan layanan ? (y/n)");
            select = in.nextLine().charAt(0);   
        } while(select != 'n');
        DaftarAntrian.addAntrian(antrian);
        menu();
    }
}
