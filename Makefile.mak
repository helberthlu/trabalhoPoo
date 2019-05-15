CPP    = g++
RM     = rm -f
OBJS   = main.o \
         Locacao.o \
         Filme.o \
         Data.o \
         Amigo.o

LIBS   =
CFLAGS = -fexceptions

.PHONY: bin/Release/Trabalho.exe clean clean-after

all: bin/Release/Trabalho.exe

clean:
	$(RM) $(OBJS) bin/Release/Trabalho.exe

clean-after:
	$(RM) $(OBJS)

bin/Release/Trabalho.exe: $(OBJS)
	$(CPP) -O2 -s -Wall -o $@ $(OBJS) $(LIBS)

main.o: main.cpp Amigo.h Filme.h
	$(CPP) -O2 -s -Wall -c $< -o $@ $(CFLAGS)

Locacao.o: Locacao.cpp
	$(CPP) -O2 -s -Wall -c $< -o $@ $(CFLAGS)

Filme.o: Filme.cpp Filme.h
	$(CPP) -O2 -s -Wall -c $< -o $@ $(CFLAGS)

Data.o: Data.cpp
	$(CPP) -O2 -s -Wall -c $< -o $@ $(CFLAGS)

Amigo.o: Amigo.cpp Amigo.h
	$(CPP) -O2 -s -Wall -c $< -o $@ $(CFLAGS)

