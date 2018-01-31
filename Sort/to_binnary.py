def binnary(num):
    lista = []

    while num > 0:
        resp = num % 2
        lista.append(resp)
        num = num // 2

    flag = True
    string = ""
    for i in range(len(lista)-1,-1,-1):
        if lista[i] % 2 == 0 and not flag:
            string += "0"
        else:
            flag = False
            string += "1"

    return string

x = int(raw_input())

print binnary(x)
