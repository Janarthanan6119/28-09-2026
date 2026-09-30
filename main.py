import sys
from typing import Final

n = int(input())
count=zero_count=0
temp = n
number:Final = n
while(temp!=0):
    dig = temp%10 #0
    if(dig==0):
        zero_count+=1
    count+=1 #1
    temp//=10 

if(zero_count==count):
    print("No")
    sys.exit(0)
end = count-1
valid = 0
print("Count",count)
print("End",end)
while(n!=0):
    dig = n%10 #0
    dig_count=0
    temp2 = number
    while(temp2!=0):
        dig2 = temp2%10 #0
        if(dig2==end):
            dig_count+=1
        temp2//=10
    if(dig_count==dig):
        valid+=1
    end-=1
    n//=10
if(valid==count):
    print("Yes")
else:
    print("No")

#1210