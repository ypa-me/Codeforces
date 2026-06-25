import math
gold = 0.1
silver = 0.2
bronze = 0.3

def code(num):
    return math.ceil(gold * num), math.ceil(silver * num), math.ceil(bronze * num)


num = int(input("Enter a number: "))
print(code(num))
