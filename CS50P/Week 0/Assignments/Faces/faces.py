def main():
    user_input = input()
    res = convert(user_input)
    print(res)


def convert(s: str):
    return s.replace(':(', '🙁').replace(':)', '🙂')


if __name__ == "__main__":
    main()
