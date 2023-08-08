#!/usr/bin/python3
def uppercase(str):
    upper_str = ""
    for letter in str:
        if ord('a') <= ord(letter) <= ord('z'):
            upper_str += chr(ord(letter) - 32)
        else:
            upper_str += letter
    print(upper_str)
