import java.math.BigDecimal;
import java.math.MathContext;
import java.math.RoundingMode;
import java.util.Scanner;

public class PiCalc {
    public static BigDecimal calculatePi(int precision){
        BigDecimal sum=BigDecimal.ZERO;
        BigDecimal one=BigDecimal.ONE;
        BigDecimal six=new BigDecimal("6");
        BigDecimal temp=new BigDecimal("0");
        MathContext mc=new MathContext(precision+10);
        for(int n=1;n<=precision+10;n++){
            temp=one.divide(BigDecimal.valueOf(n).pow(2),mc);
            sum=sum.add(temp);
        }
        BigDecimal pi=sum.multiply(six).sqrt(mc);
        return pi.setScale(precision,RoundingMode.HALF_UP);
    }
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);
        System.out.println("Podaj liczbe miejsc po przecinku dla Pi: ");
        int precision=scanner.nextInt();
        BigDecimal pi=calculatePi(precision);
        System.out.println(pi);
    }
    
}
