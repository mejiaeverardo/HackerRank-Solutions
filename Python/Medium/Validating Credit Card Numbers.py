import re

for _ in range(int(input())):
    number = input()
    pattern = r"^(?!.*([0-9])(?:-?\1){3})([456]\d{3})-?(\d{4})-?(\d{4})-?(\d{4})$"
    if bool(re.fullmatch(pattern, number)):
        print('Valid')
    else:
        print('Invalid')