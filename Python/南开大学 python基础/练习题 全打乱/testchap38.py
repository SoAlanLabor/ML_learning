m = eval(input())
n = eval(input())

def combinationcalculator(x,y):
    sum = 0

    def jiechengtest(a):
        b = 1
        for i in range(1, a + 1):
            b *= i
        return b

    for i in range(1,x+1):
        sum += jiechengtest(y)/(jiechengtest(i))/(jiechengtest(y-i))
    return sum

if __name__ == '__main__':
    if 0 < m <= n:
        print(combinationcalculator(m,n))
    else:
        print("invalid")