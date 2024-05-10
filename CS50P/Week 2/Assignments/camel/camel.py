def main():
    user_input = input("camelCase: ")
    print(helper(user_input))


def helper(s: str):
    arr = []
    for ch in s:
        if ch.isupper():
            arr.append('_')
        arr.append(ch.lower())
    return ''.join(arr)


if __name__ == "__main__":
    main()
