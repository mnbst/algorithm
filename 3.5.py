def calculate(array, count):
    is_even = True
    for element in array:
        if element % 2:
            is_even = False
            break
    if is_even:
        for i in range(N):
            array[i] = array[i] / 2
        count += 1
        count = calculate(array, count)
    return count


if __name__ == "__main__":
    N = int(input("N="))
    array = [64, 64, 128, 64, 64, 64, 64, 64, 64, 64]
    count = 0

    # for i in range(N):
    #     value = input("array[{}]=".format(i))
    #     while not value:
    #         value = input("array[{}]=".format(i))
    #     array.append(int(value))

    count = calculate(array, count)
    print(count)