/*
Autobiographical Number
Sample Input:
1210
1->indicates there is 1 Zero
2->indicates there is 2 One
1->indicates there is 1 Two
0->indicates there is 0 Three
Sample Output:
Yes
*/
#include<stdio.h>
int main(){
     int n;
    scanf("%d",&n);
    int temp = n,count=0;
    while(temp!=0){
        temp/=10;
        count++;
    }
    const int number = n;
    int valid=0;
    int end=count-1;//3
    while(n!=0){//1
        printf("N:%d\n",n);
        int dig_count=0;
        int dig = n%10;//1
        int temp2=number;
        printf("Temp2:%d\n",temp2);
        printf("End:%d\n",end);
        while(temp2!=0){
            int dig2=temp2%10;//1%10=>1
            printf("N is %d,Dig2 is %d\n",n,dig2);
            if(dig2==end){//1==0
                dig_count++;//1
            }
            temp2/=10;//0
        }
        printf("Dig_Count:%d,Dig:%d\n",dig_count,dig);
        if(dig_count==dig){//1==1
            valid++;//4
        }
        printf("Valid:%d\n",valid);
        end--;//-1
        n/=10;//0

    }
    printf("Valid:%d\nCount:%d",valid,count);
    if(valid==count){
        printf("Yes");
    }
    else{
        printf("No");
    }
}