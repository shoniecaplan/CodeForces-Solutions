# Lucky: Only has 4,7s
# Almost Lucky: divisible by lucky number
# lucky => almost lucky
#n_int = int("".join(map(str, n)))

"""for i in range(len(n)-1): # Checking if n is lucky not nec.
    if n[i] == '4' or n[i] == '7':
        continue
    else:
        break
else:
    print("YES") # lucky"""

n = int(input())

l = [4,7,44,47,74,77,444,447,474,477,744,747,774,777]

for i in range(len(l)-1):
    if (n % l[i] == 0):
        print("YES")
        break
else:
    print("NO")
    
