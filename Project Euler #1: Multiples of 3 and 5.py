def s(n):
    return n*(n+1)/2

a=int(input())

for i in range(a):
    n=int(input())
    n-=1
    print (int(3*(s(n//3))+5*(s(n//5))-15*(s(n//15))))
    
        
