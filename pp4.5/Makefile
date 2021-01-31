PROGRAM = main1to4
PROGRAM1 = main5
PROGRAM2 = main6
OBJS = hf/stdctr.o hf/heapctr.o
CC := gcc
CFLAGS = -O2

$(PROGRAM): $(PROGRAM).o $(OBJS)
	$(CC) -o $(PROGRAM) $(PROGRAM).o $(OBJS) -lm

$(PROGRAM1): $(PROGRAM1).o $(OBJS)
	$(CC) -o $(PROGRAM1) $(PROGRAM1).o $(OBJS) -lm

$(PROGRAM2): $(PROGRAM2).o $(OBJS)
	$(CC) -o $(PROGRAM2) $(PROGRAM2).o $(OBJS) -lm


$(OBJS) $(PROGRAM).o: header.h

clean:
	$(RM) *.o hf/*.o
