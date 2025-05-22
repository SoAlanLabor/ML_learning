def Han_No_Ta(n, i, j, k):
    if (n == 1):
        print(i, "->", k)
        return
    Han_No_Ta(n - 1, i, k, j)
    Han_No_Ta(1, i, j, k)
    Han_No_Ta(n - 1, j, i, k)


Han_No_Ta(3, "1", "2", "3")