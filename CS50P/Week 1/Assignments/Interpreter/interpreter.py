def main():
    expression = input("Expression: ").split(' ')
    n1 = int(expression[0])
    n2 = int(expression[2])
    operator = expression[1]
    print(helper(n1, operator, n2))


def helper(n1: int, o: str, n2: int):
    Math = {
        '+': n1 + n2,
        '-': n1 - n2,
        '*': n1 * n2,
        '/': n1 / n2,
    }

    return float(Math.get(o, 'wrong operator'))

if __name__ == "__main__":
    main()