list = [i for i in range(100)]
N = int(input("入力ください"))
count = 0
flag = True
while flag:
    if len(list) == 1:
        print(count)
        flag = False
    max = list[len(list) - 1]
    minimum = list[0]
    length = len(list)
    middle = int(length / 2)
    count += 1
    if list[middle] <= N:
        list = list[middle:]
    else:
        list = list[:middle]
