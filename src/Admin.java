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

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    public String toString(){
        return 
        "Name : " + name + "\n" + 
        "Password : " + password;
    }
}
