v = ["a", "o", "y", "e", "u", "i"]
w = list(input())
for c in range(len(w)):
    w[c] = w[c].lower()
    if w[c] in v:
        w[c] = ""
    else:
        w[c] = "."+w[c]

print(*w,sep="")
