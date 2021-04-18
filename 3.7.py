def insert(source_str, pos):
    """
    ＋挿入
    """
    return source_str[:pos] + "+" + source_str[pos:]


def run(pos, s, N):
    if pos >= N - 1:
        """
        最終桁に到達
        """
        return s
    """
    次の桁の前に＋を挿入しない場合
    """
    result_a = run(pos + 1, s, N)
    """
    次の桁の前に＋を挿入する場合
    """
    s = insert(s, (pos + 1))
    N += 1
    result_b = run(pos + 2, s, N)

    result = result_a + "+" + result_b
    return result


if __name__ == "__main__":
    S = input("S=")
    N = len(S)
    pos = 0
    list = []
    strings_list = run(pos, S, N).split("+")
    for i in strings_list:
        list.append(int(i))
    print(list)
    print(sum(list))
