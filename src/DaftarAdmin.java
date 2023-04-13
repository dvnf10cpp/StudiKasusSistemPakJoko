public class DaftarAdmin {
    final private static Admin[] daftarAdmin = inisialisasiData();

    private static Admin[] inisialisasiData(){
        Admin[] temporary = new Admin[2];
        temporary[0] = new Admin("joko", "ini_password_joko");
        temporary[1] = new Admin("dengklek", "ini_password_dengklek");
        return temporary;
    }

    public static Admin authenticate(String username, String password){
        for(Admin admin : daftarAdmin){
            if(admin.isMatch(username, password)){
                return admin;
            }
        }
        return null; 
    }

    public static Admin[] getDaftar(){
        return daftarAdmin;        
    }

    public static void tampilkan(){
        for(Admin admin : daftarAdmin){
            System.out.println(admin);
        }
    }
}
