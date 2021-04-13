number1 = input("Number 1: ")
number2 = input("Number 2: ")
number3 = input("Number 3: ")

if number1 > number2:
    if number1 > number3:
        print("Number1")
    else:
        print("Number3")
elif number2 > number1:
    if number2 > number3:
        print("Number2")
    else:
        print("Number3")
else:
    print("All numbers are equal")
