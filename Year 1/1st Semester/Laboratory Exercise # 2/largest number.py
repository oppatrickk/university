number1 = 0
count = 0

while count < 20:
    number2 = int(input("Enter a number: "))
    if number1 < number2:
        number1 = number2
        count += 1
    else:
        count += 1
    
    

print ("The largest number is",number1)
