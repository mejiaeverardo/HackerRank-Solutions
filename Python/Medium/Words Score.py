number_of_words = int(input())
words_list = input().split(" ")
vowels = ['o','a','e','i','u','y']
score = 0
for word in words_list:
    vowel_count = 0
    for letter in word:
        if letter in vowels:
            vowel_count += 1
    if vowel_count % 2 == 0:
        score += 2
    else:
        score += 1
print(score)