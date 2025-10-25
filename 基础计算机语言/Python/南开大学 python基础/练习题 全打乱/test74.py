s = input()
try:
    num = eval(s)
except:
    print("invalid")
else:
    if type(num) == int:
        print("yes")
    else:
        print("no")