def main():
    user_input = input(
        "What is the Answer to the Great Question of Life, the Universe, and Everything? ")
    print(helper(user_input))


def helper(s: str):
    arr = ['42', 'forty-two', 'forty two']
    if s.strip().lower() in arr:
        return 'Yes'
    return 'No'


if __name__ == "__main__":
    main()
