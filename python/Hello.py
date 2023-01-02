par = [None]*5
impar = [None]*5
inP = 0
inI = 0
cP = 0
cI = 0
for c in range(0,15):
    val = int(input())

    if val % 2 == 0:
        if inP == 5:
            for j in range(0, 5):
                print(f"par[{j}] = {par[j]}")
            inP = 0
            cP = 0
        par[inP] = val
        inP += 1
        cP += 1
    else:
        if inI == 5:
            for j in range(0,5):
                print(f"impar[{j}] = {impar[j]}")
                inI = 0
                cI = 0
        impar[inI] = val
        inI += 1
        cI += 1

for i in range(0,cI):
    print(f"impar[{i}] = {impar[i]}")
for i in range(0,cP):
    print(f"par[{i}] = {par[i]}")