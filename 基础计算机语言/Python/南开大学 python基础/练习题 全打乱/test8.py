n = eval(input())
for i in range(0,n//10+1):
    for p in range(0,n//5+1):
        for q in range(0,n+1):
            if (10*i+5*p+q) == n:
                print(i, p, q)
                break
print("ok")