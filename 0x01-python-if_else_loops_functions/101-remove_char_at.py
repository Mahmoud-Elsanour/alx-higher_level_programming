#!/usr/bin/python3
def remove_char_at(str, n):
    str_cp = ""
    for i in range(0, len(str) - 1):
        if i == n:
            continue
        str_cp += str[i]
    print(str_cp)
