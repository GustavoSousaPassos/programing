from tkinter import *
from functools import partial


def hello():
    print("Hello world")

root = Tk()

#root["bg"] = "Green"

root.configure(background="gray")
root.title("First page")
root.geometry("800x400+100+100")

Label(root, text="Hello, World!").pack()

# Parametros de Button(container, tam_bt, text_in_bt, fun_acionada)
bt = Button(root, width="8", text="Botão", command=hello).pack()
#bt["command"] = partial(hello, bt)

root.mainloop()

