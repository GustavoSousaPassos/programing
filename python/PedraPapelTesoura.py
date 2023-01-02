while True:
    fPla = input("Escolha sua opção primeiro jogador: ")
    sPla = input("Agora escolha sua opção segundo jogador: ")

    if fPla == sPla: winner = 0
    elif fPla == "pedra":
        if sPla == "tesoura": winner = 1
        else: winner = 2
    elif fPla == "papel":
        if sPla == "tesoura": winner = 2
        else: winner = 1
    else:
        if sPla == "papel": winner = 1
        else: winner = 2

    res = f"O jogador {winner} venceu!" if winner == 1 or winner == 2 else "Empate!"

    print(res)

    while True:
        opc = input("Mais uma partida? s(sim)/n(não): ").lower()
        ver = opc == "s" or opc == "n"
        if ver == True:
            if opc == "s": break
            else: exit()
        else:
            print("Opção inválida!")

