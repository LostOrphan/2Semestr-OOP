public class Newton {
    static double Pierwiastek(double P,double eps){
        if(P<0){
            throw new ArithmeticException("Pierwiastek z liczby ujemnej");
        }else{
        double a=1, b=P;
        while(Math.abs(a-b)>=eps){
            a=(a+b)/2;
            b=P/a;
        }
        return P/a;
    }
}    
    public static void main(String[] args){
        double eps=0.000001;
        try{
        System.out.println(Pierwiastek(144,eps));
        System.out.println(Pierwiastek(-144,eps));
    }
    catch(ArithmeticException e){
        System.out.println(e);
    }
}
}
