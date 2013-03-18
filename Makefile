SHELL       = /bin/sh
ARCH        = LINUX
CC          = g++
CLINKER     = $(CC)
AR          = ar crl
RANLIB      = ranlib
LOG_LIB     =
PROF_LIB    =
OPTFLAGS    = 
MPE_DIR     = 
MAKE        = make

VPATH=.:$(srcdir)
### End User configurable options ###
.SUFFIXES:	.cpp .cc .C .f90

CFLAGS	  = $(OPTFLAGS) 
CFLAGSMPE = $(CFLAGS) -I$(MPE_DIR)/include 
CCFLAGS	  = $(CFLAGS)
#FFLAGS	  = '-qdpc=e' 
FFLAGS	  = $(OPTFLAGS)
EXECS	  = main # BINARY NAME HERE
ALL_EXECS = ${EXECS} 

all: main  # add the target here

default: $(EXECS)

main: main.o
	$(CLINKER) $(OPTFLAGS)  main 'allegro-config --libs' -o main.o

clean:
	/bin/rm -f *.o *~ PI* $(ALL_EXECS) upshot rdb.* startup.* core

.c.o:
	$(CC) $(CFLAGS) -c $<

