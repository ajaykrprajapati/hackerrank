t=int(input())
c=0
for i in range(t):
    c=0
    sum1=0
    a=1
    b=2
    x=int(input())
    while(c<=x):
        
        c=a+b
        if c%2==0 and c<=x:
            sum1+=c
            
        a=b
        b=c

    print(sum1+2) 
