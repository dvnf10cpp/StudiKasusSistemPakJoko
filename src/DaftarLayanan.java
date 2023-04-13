public class DaftarLayanan {
    private Layanan[] daftarLayanan;

    public DaftarLayanan(){
        String[] namaLayanan = {"Ganti Oli","Operasi Mobil","Ketok Magic","Modifikasi Mobil Racing", "Modifikasi Mobil Elektrik"};
        int[] harga = {500_000,2_000_000,3_000_000,5_000_000,5_500_000};
        daftarLayanan = new Layanan[5];
        for(int i = 0; i < 5; i++){
            daftarLayanan[i] = new Layanan(namaLayanan[i], harga[i]);
        }
    }

    public Layanan getLayanan(int index){
        return daftarLayanan[--index];  
    }

    public void displayLayanan(){
        System.out.println("Daftar Layanan : ");
        int i = 1;
        for(Layanan layanan : daftarLayanan){
            System.out.println("-".repeat(40));
            System.out.println("Layanan Nomor : " + i++);
            System.out.println(layanan);
            System.out.println("-".repeat(40));
        }
    }
}
