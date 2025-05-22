from enum import IntFlag

s1 = input()
s2 = input()

def prefixcheck(x,y):
    if x == y[0:len(x)]:
        return x
    elif x[0:len(y)] == y:
        return y
    else:
        return 'no'

if __name__ == '__main__':
    print(prefixcheck(s1,s2))