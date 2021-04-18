list = [i for i in range(10)]
list = list[1:]
for i in list:
    a = 666666 * i
    s = str(a)
    if len(s) >= 8:
        break
    if 6 >= len(s):
        continue
    if s[3] == s[4] == s[5] == "6":
        a = 666666 * int("1{}11".format(i))
        if len(str(a)) == 10:
            print(a, i)
