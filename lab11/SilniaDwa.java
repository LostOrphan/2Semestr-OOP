import java.math.BigInteger;

public class SilniaDwa{
    public static void main(String[] args){
        BigInteger silnia= BigInteger.ONE;
        BigInteger n=new BigInteger("200");
        System.out.println("Silnia dla liczby: "+n.toString());    
        while(n.compareTo(BigInteger.ONE)>0){
            silnia=silnia.multiply(n);
            n=n.subtract(BigInteger.ONE);
        }
    System.out.println("Silnia = "+silnia.toString());
    }
}