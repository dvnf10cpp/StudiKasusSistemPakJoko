public class Antrian{
    private String name;
    private String phone;
    private String licensePlate;
    private Layanan layanans;
    private int totalHarga;

    public Antrian(){
        
    }

    public Antrian(String name, String phone, String licensePlate){
        this.name = name;
        this.phone = phone;
        this.licensePlate = licensePlate;
    }

    public String getFormattedPrice(){
        return "";
    }

    public void addLayanan(Layanan layanan){

    }

    public void addTotalPrice(int price){

    }

    public String toString(){
        return "";
    }
}
