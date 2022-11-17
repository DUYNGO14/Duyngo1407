import turtle as t
import time as ti
t.pensize(1)
t.speed(1)
t.bgcolor('pink')

def hart_arc():
	for i in range(200):
		t.right(1)
		t.forward(2)
t.up()
t.goto(-180,0)
t.down()
t.color('red')
t.left(140)
t.begin_fill()
hart_arc()
t.left(120)
hart_arc()
t.forward(224)
t.end_fill()

ti.sleep(10)