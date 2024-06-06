import java.math.BigInteger;

public class Silnia{
    public static void main(String[] args){
        BigInteger silnia= BigInteger.ONE;
        BigInteger n=new BigInteger("100");
        while(n.compareTo(BigInteger.ONE)>0){
            silnia=silnia.multiply(n);
            n=n.subtract(BigInteger.ONE);
        }
    System.out.println("Silnia = "+silnia.toString());
    }
}