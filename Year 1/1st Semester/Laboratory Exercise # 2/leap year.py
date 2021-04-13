year = int(input("Enter the year: "))

case1 = year % 400
case2 = year % 100
case3 = year % 4


if case1 == 0:
    print(year, "is a leap year.")
elif case2 == 0:
    print(year, "is not a leap year.")
elif case3 == 0:
    print(year, "is a leap year.")
else:
    print(year, "is not a leap year.")
