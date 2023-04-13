public class DaftarAntrian {
    private static Antrian[] daftarAntrian = new Antrian[10];
    private static int index = 0;

    public static void addAntrian(Antrian antrian){      
        if(daftarAntrian[9] != null){
            System.out.println("Antrian sudah penuh");
        } else {
            daftarAntrian[index++] = antrian;
        }
    }

    public static void displayAntrian(){
        if(daftarAntrian[0] == null){
            System.out.println("Tidak ada daftar layanan");
            return;
        } 
        for(Antrian antrian : daftarAntrian){
            if(antrian == null){
                break;
            }
            System.out.println("-".repeat(40));            
            System.out.println(antrian);
            System.out.println("-".repeat(40));
        }
        
    }
}
