t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    f=input()
    flag,flag2=0,0
    for i in range(n):
        if s[i]=='1' and f[i]=='0':
            flag+=1
        elif s[i]=='0' and f[i]=='1':
            flag2+=1
    ans=min(flag,flag2)+abs(flag2-flag)
    print(ans)