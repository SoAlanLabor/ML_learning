import re
def Hafman(ls):
    ls.sort(reverse=False)
    print(ls)
    for i in range(num):
        if i == num-1:
            return ("Valid")
        for j in range(i+1,num):
            str = re.match(ls[i],ls[j])
            if str is not None:
                return("Invalid")
num = eval(input())
ls = list()
for i in range(num):
    ls.append(input())
print(Hafman(ls))
