def main():
    user_input = int(input("m: "))
    res = convert(user_input)
    print("E: ", res)


def convert(m: int):
    return m * pow(300000000, 2)


if __name__ == "__main__":
    main()
