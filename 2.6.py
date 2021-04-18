import math

molecule = 1
n = 1
c = 0

while True:
    denominator = math.log2(n)
    if denominator:
        c1 = molecule / denominator
        if c < c1:
            print("exceded value = {}".format(c1))
        if c == c1:
            print("stop decreasing value = {}".format(c))
        print(c1)
        c = c1
    n += 1
    molecule += 1 / n
