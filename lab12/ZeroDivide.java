package lab12;

public class ZeroDivide {
    static void Dziel(double a,double b){
        if(b==0){
            throw new ArithmeticException("dzielenie przez zero");
        }
        else if(b==1){
            throw new ArithmeticException("dzielenie przez jeden");
            // System.out.println(a);

        }
        else if(b==a){
            throw new ArithmeticException("dzielenie liczby przez sama siebie");
            // System.out.println("1");
        }
        else{
            System.out.println(a/b);
        }
    }
public static void main(String[] args){
    try{
        Dziel(10,2);
        // Dziel(10,0);
        Dziel(10, 1);
        Dziel(10,10);
    }
    catch(ArithmeticException e){
        System.out.println(e);
    }
    
}
}
