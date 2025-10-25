n = eval(input())
i,sum,rit = 1,0,1
s1,s2="sum","sum"
while i<=n:
    rit*=i
    sum+=rit
    i+=1
print(sum)
print(s1==s2)