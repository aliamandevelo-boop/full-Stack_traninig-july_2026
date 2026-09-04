try:
    a = int(input("Enter first value: "))
    b = int(input("Enter second value: "))

    print("\n1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        print("Answer =", a + b)

    elif choice == 2:
        print("Answes=", a - b)

    elif choice == 3:
        print("Answer =", a * b)

    elif choice == 4:
        if b == 0:
            print("Cannot divide by zero!")
        else:
            print("Answer =", a / b)

    else:
        print("Wrong choice! Please enter 1 to 4.")

except ValueError:
    print("Wrong input! Only numbers are allowed.")


    