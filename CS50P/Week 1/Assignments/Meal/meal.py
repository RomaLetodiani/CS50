def main():
    time_str = input("Enter the time in 24-hour format (e.g., 07:30): ")
    time = convert(time_str)
    if 7.0 <= time <= 8.0:
        print("breakfast time")
    elif 12.0 <= time <= 13.0:
        print("lunch time")
    elif 18.0 <= time <= 19.0:
        print("dinner time")


def convert(time):
    hours, minutes = map(int, time.split(":"))
    return hours + minutes / 60.0


if __name__ == "__main__":
    main()
