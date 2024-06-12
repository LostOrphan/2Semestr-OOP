import java.math.BigDecimal;
import java.math.MathContext;
import java.math.RoundingMode;
// import java.math.RoundingMode;
import java.util.Scanner;
import java.lang.Math;

public class Rozwpi {
      public static void main(String[] args){
        System.out.println("Podaj dlugosc rozwinieca: ");
        Scanner in = new Scanner(System.in);
        int iterator=in.nextInt();

        BigDecimal liczba=new BigDecimal("6");
        BigDecimal dodatek=new BigDecimal("0");
        BigDecimal six=new BigDecimal("6");
        for(int i=1;i<=iterator;i++){
          dodatek=dodatek.add(six);
          BigDecimal dzielnik=new BigDecimal((i+1)*(i+1));
          dodatek=dodatek.divide(dzielnik, new MathContext(iterator,RoundingMode.FLOOR));
          liczba=liczba.add(dodatek);
        }
        System.out.println("Liczba pi rozwinieta do "+iterator+" miejsc wynosi: "+liczba.sqrt(new MathContext(20,RoundingMode.FLOOR)));        
      }
}