compile:
	cc handleSignals.c alarm.c -c

signal:
	cc handleSignals.o -o signal.out
	-./signal.out

alarm:
	cc alarm.o -o alarm.out
	-./alarm.out

clean:
	-rm signal.out alarm.out handleSignals.o alarm.o -f