def main():
    balance = 50
    inserted = 0
    while balance > 0:
        coin = input(f"Amount Due: {balance}\nInsert Coin: ")
        if coin in ('5', '10', '25'):
            balance -= int(coin)
            inserted += int(coin)
    if balance <= 0:
        print(f"Change Owed: {inserted - 50}")


if __name__ == "__main__":
    main()
