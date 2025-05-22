import re
html = input()
rlt = re.findall(r'href="[\s\S]*?"',html,re.I)
for r in range(len(rlt)):
    a = rlt[r].split("\"")[1]
    print("%s" %(a))