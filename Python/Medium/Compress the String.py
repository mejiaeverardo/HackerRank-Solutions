string = input() + " "
output = ""
count = 1
for i in range(len(string)-1):
    if string[i] == string[i+1]:
        count += 1
    else:
        output += f"({count}, {string[i]}) "
        count = 1
print(output)