# 1 <= i <= |s|-1: s(i) = s(i+1)
            # s(i) = _
            # remove s(i+1)
            
from array import array
t = int(input())
    
for i in range(t):
    s = list(input())
    if len(s) > 1:
        for j in range(len(s)-1):
            #print(f"j={j}, {s[j]}, {s[j+1]}")
            if s[j] == s[j+1]:
                print("1")
                break
        else:
            print(len(s))
            continue
    else:
        print("1")


# db of info
# every 3 days follow up
# excel 
# open crm scrape
# 15% sales from software
# 
