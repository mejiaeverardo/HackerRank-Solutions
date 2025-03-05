def minion_game(string):
    kevin_score, stuart_score = 0, 0
    n = len(string)
    for i in range(n):
        if(string[i] in ['A','E','I','O','U']):
            kevin_score += n-i
        else:
            stuart_score += n-i

    if(stuart_score > kevin_score):
        print (f'Stuart {stuart_score}')
    elif (stuart_score < kevin_score):
        print (f'Kevin {kevin_score}')
    else:
        print('Draw')

if __name__ == '__main__':
    s = input()
    minion_game(s)