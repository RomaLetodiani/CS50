def main():
    user_input = input("Greeting: ")
    print(f"${helper(user_input.lower().strip())}")


def helper(s: str):
    if s.startswith('hello'):
        return 0
    if s.startswith('h'):
        return 20
    return 100


if __name__ == "__main__":
    main()
