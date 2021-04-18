import math

N = 0

while True:
    N += 1
    if N > 2 and 2 ** N > N ** 2019:
        print("end")
        break
    print("N={} and still 2^N < N^2019".format(N))
