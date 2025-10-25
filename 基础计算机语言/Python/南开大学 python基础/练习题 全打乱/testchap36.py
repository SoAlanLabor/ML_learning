def sushu(x):
    if x <= 1:
        return "invalid"
    else:
        for i in range(2,x):
            if x % i == 0 :
                return 'False'
        return 'True'

if __name__ == '__main__':
    while True:
        m = eval(input())
        if m == 0:
            break
        print(sushu(m))