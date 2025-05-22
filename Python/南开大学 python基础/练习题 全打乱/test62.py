import re
str1 = input()
str2 = input()
rlt = re.finditer(str2,str1)
if rlt == list():
    print("请输入合法语句")
else:
    for r in rlt:
        print(r.start(0))