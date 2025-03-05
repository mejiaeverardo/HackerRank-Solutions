import re

n = int(input())
for _ in range(n):
    line = input()
    line = re.sub(r'(?<=\s)&&(?=\s)', 'and', line)
    line = re.sub(r'(?<=\s)\|\|(?=\s)', 'or', line)
    print(line)
