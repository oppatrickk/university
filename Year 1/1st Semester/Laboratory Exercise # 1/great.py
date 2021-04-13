number1 = input("Number 1: ")
number2 = input("Number 2: ")
number3 = input("Number 3: ")

if number1 > number2 & number3:
    print("number1")
elif number2 > number1 & number2:
    print("Number2")
elif number3 > number1 & number2:
        print("Number3")
else:
    print("All numbers are equal")
