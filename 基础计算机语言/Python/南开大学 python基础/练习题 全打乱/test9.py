n = eval(input())
m = eval(input())
for i in range(0,10):
    for p in range(0,10):
        for q in range(0,10):
            if (100*i+10*p+q) == (p**3+q**3+i**3) and (n <= 100 * i + 10 * p + q <= m):
                print(100*i+10*p+q)
                break
            elif 100 * i + 10 * p + q == m:
                print("not found")
                break
                
print("ok")
