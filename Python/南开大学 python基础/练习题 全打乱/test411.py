class Time:
    def SetTime(self,h,m,s):
        self.h = h
        self.m = m
        self.s = s
    def AddOneSec(self):
        self.s += 1
        if self.s == 60:
            self.s = 0
            self.m += 1
        if self.m ==60:
            self.m = 0
            self.h += 1
        if self.h == 24:
            self.h = 0

if __name__ == '__main__':
    h=int(input())
    m=int(input())
    s=int(input())
    count=int(input())
    t=Time()
    t.SetTime(h,m,s)
    for i in range(count):
        print('%02d:%02d:%02d'%(t.h,t.m,t.s))
        t.AddOneSec()