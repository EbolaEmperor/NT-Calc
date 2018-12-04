import Tkinter as tk
import ttk
import tkMessageBox
import commands

def clickMe():
    ty=numberChosen.current()
    var= entry1.get()
    if ty==0 : cmd = "./compiled/gcd "+var
    if ty==1 : cmd = "./compiled/pow "+var
    if ty==2 : cmd = "./compiled/inverse "+var
    if ty==3 : cmd = "./compiled/residue-2 "+var
    if ty==4 : cmd = "./compiled/phi "+var
    ans = commands.getoutput(cmd)
    tkMessageBox.showinfo('Solved!',ans)


win = tk.Tk()
win.geometry("300x160")
win.title("NT-Calc")

label1=tk.Label(win, text="Choose Type:")
label1.grid(column=1, row=1)
number = tk.StringVar()
numberChosen = ttk.Combobox(win, width=16, textvariable=number)
numberChosen['values'] = ('gcd', 'pow', 'inverse', 'residue-sqrt', 'phi(Eular)')
numberChosen.grid(column=1, row=2)
numberChosen.current(0)

label3=tk.Label(win, text="Commands:")
label3.grid(column=1, row=5)
entry1=tk.Entry(win,width=35,bg="white",fg="black")
entry1.grid(column=1, row=6)

action = tk.Button(win, text="Solve!", command=clickMe)
action.grid(column=1, row=7)

win.mainloop()