import itertools

N = int(input())
string = input().split(" ")
K = int(input())

sub_strings = list(itertools.combinations(string, K))
desired_sub_strings = [i for i in sub_strings if 'a' in i]

print(len(desired_sub_strings)/len(sub_strings))