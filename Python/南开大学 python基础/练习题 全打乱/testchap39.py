m = input()
n = input()

def judgenum():
    if n.isnumeric() and m.isnumeric():
        return eval(m)+eval(n)
    elif n.isnumeric() or m.isnumeric():
        if n.isnumeric():
            return m*eval(n)
        else:
            return n*eval(m)
    else:
        return m+n

def judgenum2(s):
    for i in range(len(s)):
        if s[i]<'0' or s[i]>'9':
            return False
    return True

if __name__ == '__main__':
    print(judgenum())
    print("Hello")