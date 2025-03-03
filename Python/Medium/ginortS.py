string = input()
lower, upper, odd, even = '', '', '', ''
for char in sorted(string):
    if char.islower():
        lower += char
    elif char.isupper():
        upper += char
    elif int(char) % 2:
        odd += char
    else:
        even += char
print(lower + upper + odd + even)