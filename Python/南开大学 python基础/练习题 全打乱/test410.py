import math

class Circle:
    def SetCenter(self,x,y):
        self.x = x
        self.y = y
    def SetRadius(self,r):
        self.r = r
    def GetArea(self):
        return math.pi*self.r*self.r

if __name__ == '__main__':
    x=eval(input())
    y=eval(input())
    r=eval(input())
    c=Circle()
    c.SetCenter(x,y)
    c.SetRadius(r)
    print('center:(%.2f,%.2f),radius:%.2f'%(c.x,c.y,c.r))
    print('area:%.2f'%c.GetArea())