import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count=0,zero_count=0,temp=n;
        while(temp!=0){
            int dig = temp%10;
            if(dig==0){
                zero_count++;
            }
            count++;
            temp/=10;
        }
        if(zero_count==count){
            System.out.println("No");
            return;
        }
        int end = count-1,valid=0;
        final int number = n;
        while(n!=0){
            int dig = n%10;//1210%10=>0
            int temp2 = number;
            int dig_count=0;
            while(temp2!=0){
                int dig2 = temp2%10;
                if(dig2==end){
                    dig_count++;
                }
                temp2/=10;
            }
            if(dig_count==dig){
                valid++;
            }
            n/=10;
            end--;
        }
        if(valid==count){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}