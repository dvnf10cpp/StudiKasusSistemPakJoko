public class Antrian {
    private String name;
    private String phone;
    private String licensePlate;
    private Layanan[] layanans;
    private int totalHarga;
    private int index;

    public Antrian(){

    }

    public Antrian(String name, String phone, String licensePlate){
        this.name = name;
        this.phone = phone;
        this.licensePlate = licensePlate;
        layanans = new Layanan[3];   
        index = 0;
    }

    public String getFormattedString(){
        return "";
    }

    public void addLayanan(Layanan layanan){
        if(layanans[2] != null){
            System.out.println("Layanan sudah penuh!");
        } else {
            layanans[index++] = layanan;  
        }
    }
    
    public void addTotalPrice(int price){
        totalHarga += price;
    }


    public String toString(){
        String temp = 
        "Name : " + name + "\n" + 
        "Phone : " + phone + "\n" + 
        "License : " + licensePlate + "\n" + 
        "Daftar Layanan : ";
        for(int i = 0; i < layanans.length; i++){
            if(layanans[i] == null) break;
            temp += "Layanan Nomor : " + (i + 1) + "\n" + layanans[i];
        }
        return temp;
    }
    public String getName() {
        return name;
    }
    
    public void setName(String name) {
        this.name = name;
    }
    
    public String getPhone() {
        return phone;
    }
    
    public void setPhone(String phone) {
        this.phone = phone;
    }
    
    public String getLicensePlate() {
        return licensePlate;
    }
    
    public void setLicensePlate(String licensePlate) {
        this.licensePlate = licensePlate;
    }
    
    public Layanan[] getLayanans() {
        return layanans;
    }
    
    public void setLayanans(Layanan[] layanans) {
        this.layanans = layanans;
    }
    
    public int getTotalHarga() {
        return totalHarga;
    }
    
    public void setTotalHarga(int totalHarga) {
        this.totalHarga = totalHarga;
    }
    
    public int getIndex() {
        return index;
    }
    
    public void setIndex(int index) {
        this.index = index;
    }
}
