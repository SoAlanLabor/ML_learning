from asyncio import Event
from token import MINUS

n = eval(input())
ls = list()

def sorttest(x):
    for i in range(0,len(x)-1):
        m = i
        for j in range(i,len(x)-1):
            if x[m] > x[j+1]:
                m = j+1
        if x[m] != x[i]:
            x[i],x[m] = x[m],x[i]
        print(x)
    return x


if __name__ == '__main__':
    for i in range(0,n):
        ls.insert(i,eval(input()))
    ls = sorttest(ls)