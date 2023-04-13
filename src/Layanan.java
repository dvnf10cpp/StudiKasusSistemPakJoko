public class Layanan{
    private String name;
    private int price;
    private String description;

    public Layanan(String name, int price){
        this.name = name;
        this.price = price;
    }

    public Layanan(String name, int price, String description){
        this.name = name;
        this.price = price;
        this.description = description;
    }

    public String getFormattedPrice(){
        String temp = String.valueOf(price);
        String res = "", formatted = "Rp. ";
        int counter = 0;
        for(int i = temp.length()-1; i >= 0; i--){
            res += temp.charAt(i);   
            counter++;
            if(counter % 3 == 0 && i != 0){
                res += ",";
            } 
        }
        for(int i = res.length()-1; i >= 0; i--){
            formatted += res.charAt(i);
        }
        return formatted;
    }

    public String toString(){
        return 
        "Nama : " + name + "\n" + 
        "Price : " + getFormattedPrice() + (description == null ? "" : "Description : " + description + "\n" );
    }
}