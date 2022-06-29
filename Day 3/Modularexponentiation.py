from os import *
from sys import *
from collections import *
from math import *

import sys
sys.setrecursionlimit(10**7)

def modularExponentiation(x, n, m):
    ans = 1
    while(n):
        if(n%2==1):
            ans = ans * x
            ans = ans%m
            n = n-1
        else:
            n = n/2
            x = (x*x)%m
    return ans

# Main.
t = int(input())
while (t > 0):
	lst = list(map(int,input().split()))
	x,n,m = lst[0], lst[1], lst[2]
	print(modularExponentiation(x, n, m))
	t -= 1