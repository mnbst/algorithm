list = [i for i in range(10)]
list = list[1:]
for i in list:
    for j in list:
        a = j * i + j * 2 * 10
        if a % 100 == a:
            continue
        else:
            s = str(a)
            if s[1] == "3":
                for k in list:
                    s = str(k * i + 3)
                    if s[len(s) - 1] == "4":
                        s = str(k * i + k * 2 * 10)
                        if len(s) >= 3:
                            continue
                        else:
                            print(int(s) * 10 + a)
                            break
