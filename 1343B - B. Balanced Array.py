t = int(input())
for i in range(t):
    n = int(input())
    a = [0] * n
    
    # a[0]  ,..., a[n/2-1]: even
    # a[n/2],..., a[n-1]  : odd
    # Checking if ∃a: above. Let k=n/2.
    # Need k of each s.t. they sum to equality.

    # 2a+2b+2c+...           = 2(a+b+c+...)
    # 2a+1 + 2b+1 + 2c+1+... = 2(a+b+c+...) + k
    # k needs to be even then add even k to last term of a[0:(n>>2)-1]
    # a[0:n-1] = a[0:k-1] concat a[k:n-1]
    
    k = n >> 1
    if k % 2 == 0:
        for i in range(k):    # 0 to k-2
            a[i] = 2*(i+1)
        a[k-1] = 2*(i+1) + k  # k-1
        for i in range(k):    # k to n-1
            a[k+i] = 2*(i+1) + 1
        print('YES\n',*a)
    else:
        print('NO')
