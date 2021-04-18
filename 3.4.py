N = int(input("N="))
array = []
for i in range(N):
    value = input("array[{}]=".format(i))
    while not value:
        value = input("array[{}]=".format(i))
    array.append(int(value))

min = 10000000000000000
max = -1

for element in array:
    if element <= min:
        min = element
    if element >= max:
        max = element

print(max - min)
