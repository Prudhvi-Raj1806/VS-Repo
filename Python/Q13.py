num1, num2, num3 = 10, 5, 12
if num1 <= num2 and num1 <= num3:
    print(f"The smallest number is {num1}.")
elif num2 <= num1 and num2 <= num3:
    print(f"The smallest number is {num2}.")
else:
    print(f"The smallest number is {num3}.")