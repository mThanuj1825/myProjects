from tkinter import *


root = Tk()
root.title("Simple Calculator")
root.geometry("412x480")

entry = Entry(root,
              width=30,
              font=("Sans serif", 15),
              borderwidth=4)
entry.grid(row=0,
           column=0,
           columnspan=4,
           padx=5,
           pady=10)


def button_click(number):
    current = entry.get()
    entry.delete(0, END)
    entry.insert(0, str(current) + str(number))


def button_clear():
    entry.delete(0, END)


def button_delete():
    entry.delete(len(entry.get()) - 1, END)


def button_addition():
    global first_number
    first_number = entry.get()
    global math
    math = "addition"
    entry.delete(0, END)


def button_subtraction():
    global first_number
    first_number = entry.get()
    global math
    math = "subtraction"
    entry.delete(0, END)


def button_multiplication():
    global first_number
    first_number = entry.get()
    global math
    math = "multiplication"
    entry.delete(0, END)


def button_division():
    global first_number
    first_number = entry.get()
    global math
    math = "division"
    entry.delete(0, END)


def button_equals():
    second_number = entry.get()
    entry.delete(0, END)
    if math == "addition":
        entry.insert(0, int(first_number) + int(second_number))
    if math == "subtraction":
        entry.insert(0, int(first_number) - int(second_number))
    if math == "multiplication":
        entry.insert(0, int(first_number) * int(second_number))
    if math == "division":
        entry.insert(0, int(first_number) / int(second_number))


button_clear = Button(root,
                      text='clear',
                      padx=40,
                      pady=22,
                      borderwidth=2,
                      width=14,
                      command=button_clear).grid(row=1,
                                                 column=0,
                                                 columnspan=2,
                                                 pady=10)
button_delete = Button(root,
                       text='del',
                       padx=40,
                       pady=21,
                       borderwidth=2,
                       width=1,
                       command=button_delete).grid(row=1,
                                                   column=2,
                                                   pady=10)
button_division = Button(root,
                         text='÷',
                         padx=38,
                         pady=20,
                         borderwidth=2,
                         command=button_division).grid(row=1,
                                                       column=3,
                                                       pady=10)
button_7 = Button(root,
                  text='7',
                  padx=40,
                  pady=20,
                  borderwidth=2,
                  command=lambda: button_click(7)).grid(row=2,
                                                        column=0,
                                                        pady=10)
button_8 = Button(root,
                  text='8',
                  padx=40,
                  pady=20,
                  borderwidth=2,
                  command=lambda: button_click(8)).grid(row=2,
                                                        column=1,
                                                        )
button_9 = Button(root,
                  text='9',
                  padx=40,
                  pady=20,
                  borderwidth=2,
                  command=lambda: button_click(9)).grid(row=2,
                                                        column=2,
                                                        )
button_multiplication = Button(root,
                               text='x',
                               padx=38,
                               pady=20,
                               borderwidth=2,
                               command=button_multiplication).grid(row=2,
                                                                   column=3,
                                                                   pady=10)
button_4 = Button(root,
                  text='4',
                  padx=40,
                  pady=20,
                  borderwidth=2,
                  command=lambda: button_click(4)).grid(row=3,
                                                        column=0,
                                                        pady=10)
button_5 = Button(root,
                  text='5',
                  padx=40,
                  pady=20,
                  borderwidth=2,
                  command=lambda: button_click(5)).grid(row=3,
                                                        column=1,
                                                        )
button_6 = Button(root,
                  text='6',
                  padx=40,
                  pady=20,
                  borderwidth=2,
                  command=lambda: button_click(6)).grid(row=3,
                                                        column=2,
                                                        )
button_subtraction = Button(root,
                            text='-',
                            padx=39,
                            pady=20,
                            borderwidth=2,
                            command=button_subtraction).grid(row=3,
                                                             column=3,
                                                             pady=10)
button_1 = Button(root,
                  text='1',
                  padx=40,
                  pady=20,
                  borderwidth=2,
                  command=lambda: button_click(1)).grid(row=4,
                                                        column=0,
                                                        pady=10)
button_2 = Button(root,
                  text='2',
                  padx=40,
                  pady=20,
                  borderwidth=2,
                  command=lambda: button_click(2)).grid(row=4,
                                                        column=1,
                                                        )
button_3 = Button(root,
                  text='3',
                  padx=40,
                  pady=20,
                  borderwidth=2,
                  command=lambda: button_click(3)).grid(row=4,
                                                        column=2,
                                                        )
button_addition = Button(root,
                         text='+',
                         padx=37,
                         pady=20,
                         borderwidth=2,
                         command=button_addition).grid(row=4,
                                                       column=3,
                                                       pady=10)
button_0 = Button(root,
                  text='0',
                  padx=40,
                  pady=24,
                  borderwidth=2,
                  command=lambda: button_click(0)).grid(row=5,
                                                        column=0,
                                                        )
button_equals = Button(root,
                       text='=',
                       padx=37,
                       pady=24,
                       width=28,
                       borderwidth=2,
                       command=button_equals).grid(row=5,
                                                   column=1,
                                                   pady=5,
                                                   columnspan=3)

root.mainloop()
