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
        "Price : " + getFormattedPrice() + "\n" +
        (description == null ? "" : "Description : " + description + "\n" );
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }
}