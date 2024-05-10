def main():
    user_input = input("input: ")
    print(helper(user_input))


def helper(s: str):
    arr = []
    for ch in s:
        if ch not in ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'):
            arr.append(ch)
    return ''.join(arr)


if __name__ == "__main__":
    main()
