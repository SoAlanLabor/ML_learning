import os
s = input()
if os.path.isabs(s):
    print("yes")
else:
    print("no")