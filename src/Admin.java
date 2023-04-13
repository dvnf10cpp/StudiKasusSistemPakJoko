public class Admin{
    private String name;
    private String password;

    public Admin(){

    }

    public Admin(String name, String password){
        this.name = name;
        this.password = password;
    }

    public boolean isMatch(String name, String password){
        return (this.name.equals(name) && this.password.equals(password));
    }

    public String toString(){
        return "";
    }
}
