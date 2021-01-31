PROGRAM = main
OBJS = hf/list.o
CC := gcc
CFLAGS = -O2

$(PROGRAM): $(PROGRAM).o $(OBJS)
	$(CC) -o $(PROGRAM) $(PROGRAM).o $(OBJS) -lm

$(OBJS) $(PROGRAM): header.h

clean:
	$(RM) *.o hf/*.o
