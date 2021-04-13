nterms = 15

term1 = 1
term2 = 1
count = 0

print("Fibonacci sequence:")

while count < nterms:
       print(term1)
       nth = term1 + term2
       # update values
       term1 = term2
       term2 = nth
       count += 1
