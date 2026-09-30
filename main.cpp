#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;//1210
    const int temp = n;
    int temp2 = n,count=0,zero_count=0;
    while(temp2!=0){
        int dig = temp2%10;
        if(dig==0){
            zero_count++;
        }
        count++;
        temp2/=10;
    }
    if(zero_count==count){
        cout<<"No";
        return 0;
    }
    int end = count-1,valid=0;
    while(n!=0){
        int dig = n%10;//0
        int dig_count=0;
        int num = temp;
        while(num!=0){
            int dig2 = num%10;
            if(dig2==end){//0==3
                dig_count++;
            }
            num/=10;
        }
        if(dig_count==dig){
            valid++;
        }
        n/=10;
        end--;
    }
    if(valid==count){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
//1210
//