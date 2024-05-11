def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")



def is_valid(s: str):
    return s.isalnum() and 2 <= len(s) <= 6 and s[0:2].isalpha() and digits(s[2:])

def digits(s: str):
    dc = 0
    arr = []
    for c in s:
        if c.isdigit():
            dc += 1
        if dc >= 1:
            arr.append(c)
    if dc > 0:
        return arr[0] != '0' and all(c.isdigit() for c in arr)
    return True


if __name__ == "__main__":
    main()