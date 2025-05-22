from lib2to3.patcomp import tokenize_wrapper


def is_magicsquare(x):
    m,n,l,k = 0
    row,arrange,line,zline = list()
    for i in range(len(x)):
        for j in range(len(x)):
            m += x[i][j]
            n += x[j][i]
        row.append(m)
        arrange.append(n)
    l += x[i][i]
    k += x[i][len(x)-1-i]
    zline.append(k)
    line.append(l)
    return True

if __name__ == '__main__':
    n = eval(input())
    ls = []
    for i in range(n):
        ls.append(list(eval(input())))
    if is_magicsquare(ls):
        print("Yes")
    else:
        print("No")
