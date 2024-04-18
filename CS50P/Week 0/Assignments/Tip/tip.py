def main():
    dollars = dollars_to_float(input("How much was the meal? (E.g. $50.00)"))
    percent = percent_to_float(input("What percentage would you like to tip? (E.g. %15)"))
    tip = dollars * percent
    print(f"Leave ${tip:.2f}")


def dollars_to_float(d):
    return float(d.replace("$", ''))


def percent_to_float(p):
    return float(p.replace("%", '')) / 100.00


if __name__ == "__main__":
    main()
