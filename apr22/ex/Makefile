make: compile a b x y

compile:
	cc -c prog[ABXY].c

x: progX.o
	cc progX.o -o x.out

y: progY.o
	cc progY.o -o y.out

a: progA.o
	cc progA.o -o a.out

b: progB.o
	cc progB.o -o b.out



clean: 
	-rm *.o *.out
