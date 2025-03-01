n,k = map(int, input().split())
x = list(map(int, input().split()))
s = 0
for i in range(n):
    if x[i]>=x[k-1] and x[i]>0:
        s+=1
    else:
        break

print(s)
