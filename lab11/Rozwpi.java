import java.math.BigDecimal;
import java.math.MathContext;
// import java.math.RoundingMode;
import java.util.Scanner;
import java.lang.Math;

public class Rozwpi {
      public static void main(String[] args){
        System.out.println("Podaj dlugosc rozwinieca: ");
        Scanner in = new Scanner(System.in);
        int iterator=in.nextInt();
        in.close();

        MathContext mc = new MathContext(20);
        BigDecimal liczba=new BigDecimal("6");
        double liczbaAdd=0;
        for(int i=1;i<=iterator;i++){
        liczbaAdd+=6/Math.pow(iterator+1,2);
        System.out.println(liczbaAdd);
        }
        BigDecimal wynik=new BigDecimal(liczbaAdd);
        wynik=wynik.add(liczba);
        
    //     for(int i=0;i<iterator;i++){
    //         // BigDecimal dzielnik=new BigDecimal(Math.pow(i + 1, 2));
    //         // liczba=liczba.add(BigDecimal.valueOf(6)).divide(dzielnik,10,RoundingMode.HALF_UP);
    //         // BigDecimal dzielnik = new BigDecimal(Math.pow(i + 1, 2), mc);
    //         // liczba=liczba.add(BigDecimal.valueOf(6));
    //         // liczba=liczba.divide(dzielnik,mc);
    //         BigDecimal liczbaDod=new BigDecimal(6);
    //         liczba=liczba.divide(i+1,mc);
    //   }
    //   wynik=wynik.sqrt(mc);
    //   System.out.println("Liczba pi przyblizona do "+iterator+" liczb wynosi: "+wynik.toString()); 
}
}