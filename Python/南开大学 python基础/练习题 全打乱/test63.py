import re

sum = 0
str1 = input()
rlt = re.split(r' ',str1)
print(rlt)
for r in range(len(rlt)):
    sum += float(rlt[r])
print("%.1f" %sum)